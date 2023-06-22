/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:20:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 21:13:34 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
	
	return ;
}

Fixed::Fixed(const int N)
{
	//std::cout << "Default int constructor called" << std::endl;
	this->_fixedPoint = N << this->_fractionalBits; // formula to set de fixed point at fractionalBits position do left.
	
	return ;
}

Fixed::Fixed(const float F)
{
	//std::cout << "Default float constructor called" << std::endl;
	this->_fixedPoint = roundf(F * (1 << this->_fractionalBits)); // https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
	
	return ;
}

Fixed::Fixed( const Fixed & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ASSIGNMENT OVERLOAD
Fixed &	Fixed::operator=( Fixed const & rhs )
{
	//std::cout << "Copy assigned operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_fixedPoint = rhs.getRawBits();
	}
	return *this;
}

// COMPARASION OVERLOAD
bool	Fixed::operator>( Fixed obj ) const
{
	return (this->toFloat() > obj.toFloat());
}
bool	Fixed::operator<( Fixed obj ) const
{
	return (this->toFloat() < obj.toFloat());
}
bool	Fixed::operator>=( Fixed obj ) const
{
	return (this->toFloat() >= obj.toFloat());
}
bool	Fixed::operator<=( Fixed obj ) const
{
	return (this->toFloat() <= obj.toFloat());
}
bool	Fixed::operator==( Fixed obj ) const
{
	return (this->toFloat() == obj.toFloat());
}
bool	Fixed::operator!=( Fixed obj ) const
{
	return (this->toFloat() != obj.toFloat());
}

// ARITHMETIC OVERLOAD
Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed temp(this->toFloat() + rhs.toFloat());
	return (temp);
}
Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed temp(this->toFloat() - rhs.toFloat());
	return (temp);
}
Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed temp(this->toFloat() * rhs.toFloat());
	return (temp);
}
Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed temp(this->toFloat() / rhs.toFloat());
	return (temp);
}

// INCREMENT OVERLOAD
Fixed &	Fixed::operator++(  )
{
	++this->_fixedPoint;
	return (*this);
}
/* Fixed &	Fixed::++operator(  )
{
	int		value = this->getRawBits();
	this->setRawBits(++value);
	return (*this);
} */

/* float	Fixed::operator--(  )
{
	return (this->toFloat() * obj.toFloat());
}
float	Fixed::--operator(  )
{
	return (this->toFloat() / obj.toFloat());
}  */

// STREAM OVERLOAD
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
