/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/17 12:27:07 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
		this->databaseMap = rhs.databaseMap;
	}
	return ( *this );
}

bool BitcoinExchange::loadInput( std::string fileName )
{
	this->_inputFile.open( fileName.c_str(), std::ifstream::in );
		if( this->_inputFile.is_open() == false )
			throw std::runtime_error("Could not open file");
	return ( true );
}

bool	BitcoinExchange::getInputFile() const
{
	return ( this->_inputFile.is_open() );
}
bool	BitcoinExchange::getDatabaseFile() const
{
	return ( this->_databaseFile.is_open() );
}

bool	BitcoinExchange::generateMap()
{
	this->_databaseFile.open( "data.csv", std::ifstream::in );
	if ( this->_databaseFile.is_open() == false )
		return ( false );

	std::stringstream	data;
	std::string			line;

	data << this->_databaseFile.rdbuf();
	for (std::string line; getline(data, line);)
	{
		size_t 		pos = line.find(",");
		std::string date = line.substr( 0, pos );
		float		value = atof( (line.substr(  pos + 1 ) ).c_str() );
		this->databaseMap[date] = value;
	}
	return ( true );
}

void	BitcoinExchange::printMap( )
{
	std::map<std::string, float>::iterator start = this->databaseMap.begin();
	std::map<std::string, float>::iterator end = this->databaseMap.end();
	while ( start != end )
	{
		std::cout << start->first << " | " << start->second << std::endl;
		start++;
	}
}

void	BitcoinExchange::btc( )
{
	std::stringstream	input;
	std::string			line;

	input << this->_inputFile.rdbuf();
	for (std::string line; getline(input, line);)
	{
		size_t		pos = line.find( "|" );
		std::string	date = trim( line.substr( 0, pos ));
		std::string	value = trim( line.substr(  pos + 1 ) ).c_str();
		
		if ( date == "date" || hasInputErrors( line, date, value ) )
			continue ;
		else
		{
			std::map<std::string, float>::iterator		start = this->databaseMap.begin();
			std::map<std::string, float>::iterator		end = this->databaseMap.end();
			std::map<std::string, float>::iterator		prev = this->databaseMap.begin();
			
			while( start != end )
			{
				if ( ( *start ).first > date )
				{
					std::cout << ( *start ).first << " => " << ( *prev ).second * atof( value.c_str() ) << std::endl;
					break ;
				}
				else
					prev = start;
				start++;
			}
		}
	}
}

std::ostream& operator << ( std::ostream& o, const BitcoinExchange& bit )
{
	std::cout << "Input file is loaded: " << bit.getInputFile() << std::endl;
	std::cout << "Database file is loaded: " << bit.getDatabaseFile() << std::endl;
	return ( o );
}