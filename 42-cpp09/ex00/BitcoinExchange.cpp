/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:02:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 16:23:53 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    return ;
}

BitcoinExchange::BitcoinExchange()
{
    if ( this->_inputFile.is_open () )
    {
        this->_inputFile.close();
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
        *this = rhs;
    }
    return ( *this );
}

bool BitcoinExchange::load( std::string fileName )
{
    this->_inputFile.open( fileName );
    return ( ( this->_inputFile.is_open() ) ? true : false );
}