/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:36:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 11:42:11 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
	Span sp = Span(50);
	sp.addNumber(6);
	//sp.addNumber(7);
	//sp.addNumber(3);
	//sp.addNumber(17);
	//sp.addNumber(9);
	//sp.addNumber(11);
	try 
	{	
		sp.fill( 50 );
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	//sp.addNumber(11);

	//std::cout << sp << std::endl;
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
