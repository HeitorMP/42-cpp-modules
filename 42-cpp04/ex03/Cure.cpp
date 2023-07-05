/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:19:51 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/05 13:58:45 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::Cure( const Cure & src ) : AMateria(src._type)
{
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure	&Cure::operator=( Cure const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria	*Cure::clone() const {
	AMateria *tmp = new Cure();
	return (tmp);
}

void 		Cure::use(ICharacter& target) {
	std::cout << "* heals "<< target.getName() << " wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */