/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:44:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 18:59:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include "Array.tpp"

template <class T>
class Array
{
	private:
		T 				*array;
		unsigned int	size;

	public:
		Array();
		Array( unsigned int size );
		Array( Array const & src );
		~Array();

		Array & operator=( Array const & rhs );

};

#endif