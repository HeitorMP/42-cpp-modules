/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/15 09:54:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <ctime>



// std::string trim( std::string str )
// {
// 	std::string whiteSpaces = "  \t\n\r\f\v";
// 	str.erase(str.find_last_not_of(whiteSpaces) + 1);
// 	str.erase(0,str.find_first_not_of(whiteSpaces));
// 	return ( str );
// }

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



int main(int argc, char const *argv[])
{

	if ( argc != 2 )
	{
		std::cerr << "Wrong args!" << std::endl;
		return ( 1 );
	}

	BitcoinExchange	btc;

	try
	{
		btc.loadInput( argv[1] );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return ( 1 );
	}
	
	btc.generateMap();
	btc.btc();

	return ( 0 );
}
