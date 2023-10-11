/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:36:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/11 10:48:31 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
	Span sp = Span(50);
	
	sp.addNumber(6);
	
	try 
	{	
		sp.fill( 50 );
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try 
	{	
		sp.fill( 49 );
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try 
	{	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
