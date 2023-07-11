/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:34:42 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/06 13:38:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog Constructor called!" << std::endl;
}

Dog::Dog( const Dog & src ) : AAnimal(src)
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->setIdea(i, src._brain->getIdea(i));
	}
	*this = src;
	std::cout << "Dog Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete ( this->_brain );
	std::cout << "Dog Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		if (this->_brain != NULL)
			delete ( this->_brain );
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::ostream	&operator<<( std::ostream & o, Dog const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {
	std::cout << "Au Au!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */