/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:13:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/10 09:53:00 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default Cat Constructor called!" << std::endl;
}

Cat::Cat( const Cat & src ) : AAnimal(src)
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain->setIdea(i, src._brain->getIdea(i));
	}
	*this = src;
	std::cout << "Cat Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete ( this->_brain );
	std::cout << "Cat Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat	&Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		if (this->_brain != NULL)
			delete ( this->_brain );
		this->_brain = new Brain(*rhs._brain);
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

Brain	*Cat::getBrain( void ) const {
	return (this->_brain);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */