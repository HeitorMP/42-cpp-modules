/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:36:33 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/15 09:40:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helpers.hpp"

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

bool isValidSha1sum()
{
	std::ifstream temp;
	std::string const originalSha1sum = "7c527ce4220cb96615a93cdec00a4f82d9b6abf6  data.csv";
	
	system("sha1sum data.csv > .sh1");
	temp.open( ".sh1", std::ifstream::in );
	
	std::string sha1sum;
	getline( temp, sha1sum );
	temp.close();

	return ( sha1sum == originalSha1sum );
}

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

bool	isValidLine( std::string lineCandidate )
{
	return ( ft_count_if( lineCandidate, '|' ) == 1 );
}

bool	hasInputErrors( std::string line, std::string date, std::string value )
{
	if ( isValidLine( line ) == false )
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return ( true );
	}
	else 
	{
		if ( isValidDate( date ) == false )
		{
			std::cout << "Error: bad input => " << date << std::endl;
			return ( true );
		}
		else if ( isValidValue( value ) == false )
		{
			std::cout << "Error: bad value => " << value << std::endl;
			return ( true );
		}
	}
	return ( false );
}