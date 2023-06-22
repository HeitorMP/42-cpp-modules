/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:20:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 11:48:53 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
	
	return ;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assigned operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_fixedPoint = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << "Value = " << i.getRawBits();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
		int Fixed::getRawBits( void ) const {
			
			std::cout << "getRawBits member function called" << std::endl;
			return this->_fixedPoint;
		}
		
		void Fixed::setRawBits( int const raw ) {
			std::cout << "setRawBits member function called" << std::endl;
			this->_fixedPoint = raw;
		}


/* ************************************************************************** */