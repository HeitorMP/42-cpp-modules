/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:09:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/16 15:35:59 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <stack>

std::string trim( std::string str )
{
	std::string whiteSpaces = "  \t\n\r\f\v";
	str.erase(str.find_last_not_of(whiteSpaces) + 1);
	str.erase(0,str.find_first_not_of(whiteSpaces));
	return ( str );
}

int	ft_count_if( std::string const &src, char const &to_find )
{
	int	count = 0;

	for ( int i = 0; i < (int)src.size(); i++ )
		if ( src[i] == to_find ) { count++; }

	return ( count );
}

bool	parser( std::string input )
{
	std::stack<int>		stack;
	std::stringstream	expression( input );
	std::string			word;
	int					n1 = 0;
	int					n2 = 0;

	while (expression >> word) // Extract word from the stream.
	{
		std::cout << word << std::endl;
		if ( word.size() > 1 )
			return ( false );
		else
		{
			if ( word == "+" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 + n2 );
				std::cout << "result: " << stack.top() << std::endl;
			}
			else if ( word == "-" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 - n2 );
				std::cout <<  "result: " << stack.top() << std::endl;
			}
			else if ( word == "*" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 * n2 );
				std::cout <<  "result: " << stack.top() << std::endl;
			}
			else if ( word == "/" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 / n2 );
				std::cout <<  "result: " << stack.top() << std::endl;
			}
			else
				stack.push( word[0] - '0' );
		}
	}
	std::cout << stack.top() << std::endl;
	return ( true );
}


int	main(int argc, char const *argv[])
	{
	if ( argc != 2 )
	{
		std::cerr << "Invalid params!" << std::endl;
		return ( 1 );
	}
	std::string input( argv[1] );
	if ( input.find_first_not_of( "0123456789+/-* " ) != std::string::npos )
	{
		std::cerr << "Invalid operator!" << std::endl;
		return ( 1 );
	}

	if ( parser( input ) == false )
	{
		std::cerr << "Invalid argument!" << std::endl;
	}
	return 0;
}
