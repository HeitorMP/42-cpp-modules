/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/17 17:27:34 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <limits>
#include <deque>

bool	isValidNumber( std::string argument, std::deque<int> &deque, std::deque<int> &copy )
{
	if ( argument.find_first_not_of( "0123456789" ) != std::string::npos )
	{
		std::cerr << "Invalid positive integer value!" << std::endl;
		return ( false );
	}

	if ( atol( argument.c_str() ) > std::numeric_limits<int>::max() )
	{
		std::cerr << "Out of bounds!" << std::endl;
		return ( false );
	}

	if ( find(deque.begin(), deque.end(), atoi( argument.c_str() ) ) == deque.end() )
	{
		std::cerr << "Out of bounds!" << std::endl;
		return ( false );
	}
	return ( true );
}

void	parse( std::deque<int> &deque, int argc, char const *argv[] )
{
	std::deque<int> argvCopy;
	for ( int i = 1; i < argc; i++ )
		argvCopy.push_back( atoi(argv[i]) );

	for ( int i = 1; i < argc; i++ )
	{
		std::string argument( argv[i] );
		if ( isValidNumber( argument, deque, argvCopy ) )
			deque.push_back( atoi( argv[i] ) );
		else
			std::cout << "error" << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	std::deque<int> deque;

	parse( deque, argc, argv );

	std::deque<int>::iterator begin = deque.begin();
	std::deque<int>::iterator end = deque.end();
	while ( begin != end )
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	return 0;
}
