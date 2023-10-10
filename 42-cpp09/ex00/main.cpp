/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/10 11:12:18 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
	if ( argc != 3 )
	{
		std::cerr << "Wrong args!" << std::endl;
		return ( -1 );
	}

	BitcoinExchange teste;

	teste.loadInput(argv[1]);
	teste.loadDatabase(argv[2]);

	teste.generateMap();

	std::cout << teste << std::endl;
	return 0;
}
