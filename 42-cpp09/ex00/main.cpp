/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/10 14:22:27 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>

enum Month
{
	JAN = 1,
	FEB,
	MAR,
	APR,
	MAY,
	JUNE,
	JULY,
	AUG,
	SEPT,
	OCT,
	NOV,
	DEC,
};

int	ft_count_if( std::string const &src, char const &to_find )
{
	int	count = 0;

	for ( int i = 0; i < (int)src.size(); i++ )
		if ( src[i] == to_find ) { count++; }

	return ( count );
}

bool	isSurroundByDigits( std::string const &src, char const &to_find )
{
	if ( src.find( to_find ) == std::string::npos )
		return ( false );

	int	pos = src.find( to_find );
	if ( std::isdigit( src[pos - 1] ) && std::isdigit( src[pos + 1] ) )
	{
		return ( true );
	}
	return ( false );
}

bool	isSmallMonth( int month )
{
	return ( month == APR || month == JUNE || month == SEPT || month == NOV);
}

bool	isLeapYear(int year)
{
	if (year % 400 == 0) { return true; }
	else if (year % 100 == 0) { return false; }
	else if (year % 4 == 0) { return true; }
	return false;
}

bool	isValidDate( std::string dateCandidate )
{
	struct tm tm;
	
	if ( strptime(dateCandidate.c_str(), "%Y-%m-%d", &tm) )
	{
		int year = tm.tm_year + 1900;
		int month = tm.tm_mon + 1;
		int day = tm.tm_mday;

		if ( isSmallMonth( month ) && day > 30 )
			return ( false );
		if ( month == FEB && isLeapYear( year ) && day > 29 )
			return ( false );
		else if ( month == FEB && !isLeapYear( year ) && day > 28 )
			return ( false );

		return ( true );
	}
	return ( false ); // false by format
}

bool	isValidValue( std::string valueCandidate )
{
	if ( valueCandidate.find_first_not_of( ".0123456789" ) != std::string::npos )
	{
		return ( false );
	}
	if ( ft_count_if(valueCandidate, '.') > 1 )
	{
		return ( false );
	}
	if ( ft_count_if(valueCandidate, '.') == 1 && !isSurroundByDigits( valueCandidate, '.') )
	{
		return ( false );
	}
	if ( strtold( valueCandidate.c_str(), NULL ) > 1000 )
	{
		return ( false );
	}
	return ( true );
}

int main(int argc, char const *argv[])
{

	// map["one"] = 1;
	// map["two"] = 2;
	// map["three"] = 3;

	// std::map<std::string, int>::iterator it = map.begin();
	// while (it != map.end())
	// {
	// 	std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
	// 	++it;
	// }
	(void)argc;
	(void)argv;
	
	if ( argc != 2 )
	{
		std::cerr << "Wrong args!" << std::endl;
		return ( -1 );
	}

	// BitcoinExchange teste;

	// teste.loadInput(argv[1]);
	// teste.loadDatabase("data.cvs");

	// teste.generateMap();

	std::cout << isValidDate("1997-2-29") << std::endl;
	std::cout << isValidValue("1000.1") << std::endl;

	//std::cout << teste << std::endl;
	return 0;
}
