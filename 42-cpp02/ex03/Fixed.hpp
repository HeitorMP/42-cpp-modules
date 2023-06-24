/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:20:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/23 18:05:36 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(const int N);
		Fixed(const float F);
		Fixed( Fixed const & src );
		~Fixed();

		Fixed		&operator=( Fixed const & rhs );
		Fixed		operator+( Fixed const & rhs ) const;
		Fixed		operator-( Fixed const & rhs ) const;
		Fixed		operator*( Fixed const & rhs ) const;
		Fixed		operator/( Fixed const & rhs ) const;
		
		bool		operator>( Fixed obj ) const;
		bool		operator<( Fixed obj ) const;
		bool		operator>=( Fixed obj ) const;
		bool		operator<=( Fixed obj ) const;
		bool		operator==( Fixed obj ) const;
		bool		operator!=( Fixed obj ) const;

		Fixed 		&operator++( );
 		Fixed 		operator++( int );
 		Fixed 		&operator--(  );
 		Fixed 		operator--( int );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
		const static Fixed	&max(Fixed const &fixed1, Fixed const &fixed2);
		const static Fixed	&min(Fixed const &fixed1, Fixed const &fixed2);

	private:

		int					_fixedPoint;
		static const int	_fractionalBits = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */
/*
The 6 comparison operators: >, <, >=, <=, == and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ϵ such as 1 + ϵ > 1.*/