/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:39:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/28 09:58:09 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point() : _x(0), _y(0)
{
	//std::cout << "Default constructor called X=0, Y=0" << std::endl;
}

Point::Point( const float outX, const float outY) : _x(outX), _y(outY)
{
	//std::cout << "Default assignment constructor called" << std::endl;
}

Point::Point( const Point & src ) : _x(src._x), _y(src._y)
{
	;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
	;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point	&Point::operator=( Point & rhs )
{
	if (this != &rhs) {
		(Fixed)this->_x = rhs._x;
		(Fixed)this->_y = rhs._y;
	}
	return (*this);
}

std::ostream	&operator<<( std::ostream & o, Point const & i )
{
	o << "Value X = " << i.getX() << " - Value Y = " << i.getY();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Fixed Point::getX() const {
	return ( (Fixed)this->_x );
}

Fixed Point::getY() const {
	return ( (Fixed)this->_y );
}
/* ************************************************************************** */