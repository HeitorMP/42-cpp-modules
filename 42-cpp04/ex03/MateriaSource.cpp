/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:42:55 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/10 10:13:20 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for ( int i = 0; i < LEARN_SLOTS; i++ ) {
		this->_materiasLearned[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for ( int i = 0; i < LEARN_SLOTS; i++ ) {
		delete ( this->_materiasLearned[i] );
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource	&MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < LEARN_SLOTS; i++) {
			if (rhs._materiasLearned[i] != NULL) {
				delete ( this->_materiasLearned[i] );
				memcpy(this->_materiasLearned, rhs._materiasLearned, LEARN_SLOTS * sizeof(AMateria *));
			}
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void 		MateriaSource::learnMateria( AMateria *materia )
{
	for (int i = 0; i < LEARN_SLOTS; i++) {
		if (this->_materiasLearned[i] == NULL) {
			this->_materiasLearned[i] = materia;
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < LEARN_SLOTS; i++) {
		if ( this->_materiasLearned[i] != NULL ) {
			if (type == this->_materiasLearned[i]->getType()) {
				return (this->_materiasLearned[i]->clone());
			}
		}
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
