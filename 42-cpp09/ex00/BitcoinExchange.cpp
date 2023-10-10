/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/10 11:45:43 by hmaciel-         ###   ########.fr       */
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

void	BitcoinExchange::generateMap()
{
	//std::map<std::string, float>::iterator it = this->inputMap.begin();
	std::stringstream	input;
	std::string	line;

	input << this->_inputFile.rdbuf();
	for (std::string line; getline(input, line);)
	{
		
	}
	
}

std::ostream& operator << ( std::ostream& o, const BitcoinExchange& bit )
{
	std::cout << "Input file is loaded: " << bit.getInputFile() << std::endl;
	std::cout << "Database file is loaded: " << bit.getDatabaseFile() << std::endl;
	return ( o );
}