/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:12:12 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 16:59:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
//https://www.programiz.com/cpp-programming/function-template

template <typename T>
void swap( T &a, T &b ) {
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min( T &a, T &b ) {
	return ( ( a < b ) ? a : b );
}

template <typename T>
T max( T &a, T &b ) {
	return ( ( a > b ) ? a : b );
}

#endif