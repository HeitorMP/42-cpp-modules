/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:34:42 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/02 11:01:53 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal( "Dog" )
{
	std::cout << "Default Dog Constructor called!" << std::endl;
	this->_ideas = new Brain();
}

Dog::Dog( const Dog & src ) : AAnimal( "Dog" )
{
	this->_type = src._type;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Dog Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete ( this->_ideas );
	std::cout << "Dog Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog	&Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
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