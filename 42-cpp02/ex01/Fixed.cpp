/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:20:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 19:16:42 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
	
	return ;
}

Fixed::Fixed(const int N)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = N << this->_fractionalBits; // formula to set de fixed point at fractionalBits position do left.
	
	return ;
}

Fixed::Fixed(const float F)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(F * (1 << this->_fractionalBits)); // https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
	
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

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assigned operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_fixedPoint = rhs.getRawBits();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int Fixed::getRawBits( void ) const {
			
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

/*
** --------------------------------- METHODS ---------------------------------
*/

float Fixed::toFloat( void ) const {
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const {
	return this->_fixedPoint >> _fractionalBits;
}

/* ************************************************************************** */
