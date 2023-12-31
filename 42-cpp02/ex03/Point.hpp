/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:39:02 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/28 09:58:54 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point( const float x, const float y );
		Point( Point const & src );
		~Point();

		Fixed		getX() const;
		Fixed		getY() const;

		Point		&operator=( Point & rhs );

	private:

		Fixed const _x;
		Fixed const _y;

};

std::ostream		&operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */
