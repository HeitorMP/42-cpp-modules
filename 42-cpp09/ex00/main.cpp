/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/11 16:53:35 by hmaciel-         ###   ########.fr       */
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

	BitcoinExchange teste;

	teste.loadInput(argv[1]);
	teste.loadDatabase("data.cvs");

	teste.generateMap();

	// std::cout << "Date is valid: " << isValidDate("    		 1997-3-29   ") << std::endl;
	// std::cout << "Value is valid: " << isValidValue("   		 999     ") << std::endl;

	//generateTokens( "heitor | pinto" )
	
	teste.printMap();
	//std::cout << teste << std::endl;
	return 0;
}
