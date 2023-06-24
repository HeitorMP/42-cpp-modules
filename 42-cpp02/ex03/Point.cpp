/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:39:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/24 11:03:36 by hmaciel-         ###   ########.fr       */
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

Point::Point( const Point & src )
{
	(void)src;
	;//*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

bool	Point::operator==( Point obj ) const
{
	return ( (this->getX() == obj.getX()) && (this->getY() == obj.getY()) );
}

/* Point	&Point::operator=( Point & rhs )
{
	return ( rhs );
} */

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

float Point::getX() const {
	return ( this->_x.toFloat() );
}

float Point::getY() const {
	return ( this->_y.toFloat() );
}
/* ************************************************************************** */