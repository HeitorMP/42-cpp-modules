/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:19:51 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/04 18:11:25 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure Constructor called!" << std::endl;
}

Cure::Cure( const Cure & src ) : AMateria(src._type)
{
	std::cout << "Copy Cure Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure	&Cure::operator=( Cure const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
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