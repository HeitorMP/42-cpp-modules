/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/18 08:26:26 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <limits>
#include <deque>
#include <iomanip>

bool	isValidNumber( std::string argument, std::deque<int> &deque )
{
	if ( argument.find_first_not_of( "0123456789" ) != std::string::npos )
	{
		std::cerr << "Invalid positive integer value!" << std::endl;
		return ( false );
	}

	double nb = atol( argument.c_str() );
	if ( nb > std::numeric_limits<int>::max() || nb < 0 )
	{
		std::cerr << "Out of bounds!" << std::endl;
		return ( false );
	}
	if ( find(deque.begin(), deque.end(), nb ) != deque.end() )
	{
		std::cerr << "Repeated element!" << std::endl;
		return ( false );
	}
	return ( true );
}

bool	parse( std::deque<int> &deque, int argc, char const *argv[] )
{
	for ( int i = 1; i < argc; i++ )
	{
		std::string argument( argv[i] );
		if ( isValidNumber( argument, deque ) )
			deque.push_back( atoi( argv[i] ) );
		else
			return ( false );
	}
	return ( true );
}

int main(int argc, char const *argv[])
{
	std::deque<int> deque;

	if ( parse( deque, argc, argv ) == false )
		return ( 1 );
	std::deque<int>::iterator begin = deque.begin();
	std::deque<int>::iterator end = deque.end();
	while ( begin != end )
	{
		std::cout << *begin << std::endl;
		begin++;
	}

	return 0;
}
