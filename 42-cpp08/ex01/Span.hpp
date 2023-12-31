/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:15:56 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/06 10:06:29 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>
# include <algorithm>
# include <limits>

class Span
{
	private:
		unsigned int		n;
		std::vector<int>	spanList;

		Span();
		
	public:
		Span( unsigned int n );
		Span( Span const & src );
		~Span();
		
		Span & operator=( Span const & rhs );

		int		shortestSpan() const;
		int		longestSpan() const;
		void	addNumber( int const & number );
		void	fill( int const & number );
		
		std::vector<int>	getVector( void ) const;
		unsigned int		getN( void ) const;

};

std::ostream& operator <<( std::ostream& o, const Span& i );

#endif