/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/12 16:49:20 by hmaciel-         ###   ########.fr       */
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
	std::string	line;

	input << this->_inputFile.rdbuf();
	for (std::string line; getline(input, line);)
	{
		size_t		pos = line.find("|");
		std::string	date = trim( line.substr( 0, pos ));
		std::string	value = trim( line.substr(  pos + 1 ) ).c_str();
		
		if ( isValidLine( line ) == false )
			std::cout << "Error: bad input => " << date << std::endl;
		else 
		{
			if ( isValidDate( date ) == false )
				std::cout << "Error: bad input => " << date << std::endl;
			else if ( isValidValue( value ) == false )
				std::cout << "Error: bad value => " << value << std::endl;
			else
			{
				std::map<std::string, float>::iterator		start = this->databaseMap.begin();
				std::map<std::string, float>::iterator		end = this->databaseMap.end();
			//	std::map<std::string, float>::key_compare	mycomp = this->databaseMap.key_comp();
				
				while( start != end )
				{
					std::cout << (*start).first << std::endl;
					std::cout << (*start).second << std::endl;
					// if ( mycomp((*start).first, date ) )
					// {
					// //	std::cout << start->second << std::endl;
        			//  	//std::cout << date << " => " << (*start).second * atof( value.c_str() ) << '\n'; 
					// 	break ;
					// }
					start++;
    			}
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