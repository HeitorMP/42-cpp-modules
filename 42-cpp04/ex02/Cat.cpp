/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:13:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/02 11:08:56 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : AAnimal( "Cat" )
{
	std::cout << "Default Cat Constructor called!" << std::endl;
	this->_ideas = new Brain();
}

Cat::Cat( const Cat & src ) : AAnimal( "Cat" )
{
	this->_type = src._type;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Cat Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete ( this->_ideas );
	std::cout << "Cat Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=( Cat const & rhs )
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

std::ostream	&operator<<( std::ostream & o, Cat const & i )
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {
	std::cout << "Miau Miau!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */