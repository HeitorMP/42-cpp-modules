/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:04:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 18:40:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// template <typename T>
// void printArrayByIter( T &element ) {
// 	std::cout << element << std::flush;
// }

template <class T>
void printArrayByIter( T &element ) {
	std::cout << element << std::flush;
}


int main( void )
{
	int intArray[] = { 1, 2, 3 };
	::iter(intArray, 3, &printArrayByIter );
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c' };
	::iter(charArray, 3, &printArrayByIter );
	std::cout << std::endl;

	std::string stringArray[] = { "Heitor ", "Maciel ", "Pinto" };
	::iter(stringArray, 3, &printArrayByIter );

	
	return ( 0 );
}
