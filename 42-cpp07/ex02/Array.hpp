/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:47:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/04 11:55:19 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
	private:
		T				*array;
		unsigned int	n_size;

	public:
		Array();
		Array( unsigned int size );
		Array( Array const & src );
		~Array();

		Array & operator=( Array const & rhs );
		T & operator[]( unsigned int index );

		unsigned int	size( void ) const;
};

# include "Array.tpp"
#endif
