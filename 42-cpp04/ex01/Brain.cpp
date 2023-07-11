/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 16:25:12 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/10 09:45:12 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = "Unoriginal idea";
	}
	std::cout << "Default Brain Constructor called!" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Copy Brain Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
std::string Brain::getIdea( int idx ) {
	return (this->_ideas[idx]);
}

void		 Brain::setIdea( int idx, std::string newIdea ) {
	this->_ideas[idx] = newIdea;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */