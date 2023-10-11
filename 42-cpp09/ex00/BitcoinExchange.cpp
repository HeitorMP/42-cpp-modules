/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/11 16:53:28 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


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

bool	isValidLine( std::string lineCandidate )
{
	return ( ft_count_if( lineCandidate, '|' ) == 1 );
}

BitcoinExchange::BitcoinExchange()
{
    return ;
}

BitcoinExchange::~BitcoinExchange()
{
	if ( this->_inputFile.is_open () )
	{
		this->_inputFile.close();
	}
	if ( this->_databaseFile.is_open () )
	{
		this->_databaseFile.close();
	}
	return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
    *this =  src;
    return ;
}

BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	if ( this != &rhs )
	{
		;
	}
	return ( *this );
}

bool BitcoinExchange::loadInput( std::string fileName )
{
	this->_inputFile.open( fileName.c_str(), std::ifstream::in );
	return ( ( this->_inputFile.is_open() ) ? true : false );
}

bool BitcoinExchange::loadDatabase( std::string fileName )
{
	this->_databaseFile.open( fileName.c_str(), std::ifstream::in );
	return ( ( this->_databaseFile.is_open() ) ? true : false );
}

bool	BitcoinExchange::getInputFile() const
{
	return ( this->_inputFile.is_open() );
}
bool	BitcoinExchange::getDatabaseFile() const
{
	return ( this->_databaseFile.is_open() );
}


// void	generateTokens( std::string line , )
// {
// 	size_t pos = line.find("|");
// 	std::cout << pos << std::endl;
// 	std::string key, value;   

// 	key = trim(line.substr ( 0, pos ));
// 	value = trim(line.substr ( pos + 1 ));

// 	std::cout << "key: " << key << std::endl;
// 	std::cout << "value: " << value << std::endl;
	
// }
std::string trim( std::string str )
{
	std::string whiteSpaces = "  \t\n\r\f\v";
	str.erase(str.find_last_not_of(whiteSpaces) + 1);
	str.erase(0,str.find_first_not_of(whiteSpaces));
	return ( str );
}

void	BitcoinExchange::generateMap()
{
	
	std::stringstream	input;
	std::string	line;

	input << this->_inputFile.rdbuf();
	for (std::string line; getline(input, line);)
	{
		size_t 		pos = line.find("|");
		std::string date = trim( line.substr( 0, pos ));
		float		value = atof(trim( line.substr(  pos + 1 ) ).c_str());
		
		this->inputMap[date] = value;
		//std::cout << date << " | " << value << std::endl;
		//this->inputMap.insert( { date, value } );	

		// if ( isValidDate(trim(date)) && isValidValue(trim(value)))
		// {	
		// 	this->inputMap[date] = atoi( value.c_str() );
		// }
	}
	
}

void	BitcoinExchange::printMap( )
{
	std::map<std::string, float>::iterator start = this->inputMap.begin();
	std::map<std::string, float>::iterator end = this->inputMap.end();
	while ( start != end )
	{
		std::cout << start->first << " | " << start->second << std::endl;
		start++;
	}

	
}

std::ostream& operator << ( std::ostream& o, const BitcoinExchange& bit )
{
	std::cout << "Input file is loaded: " << bit.getInputFile() << std::endl;
	std::cout << "Database file is loaded: " << bit.getDatabaseFile() << std::endl;
	return ( o );
}