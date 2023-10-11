/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:48:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/11 16:10:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <algorithm>
# include <string>
# include <map>
# include <bits/stdc++.h> 

class BitcoinExchange
{
	private:

		std::ifstream	_inputFile;
		std::ifstream	_databaseFile;
		std::map<std::string, float> databaseMap;
		std::map<std::string, float> inputMap;

	public:
		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();
		BitcoinExchange & operator=( BitcoinExchange const & rhs );

		bool			loadInput( std::string fileName );
		bool			loadDatabase( std::string fileName );
		bool			getInputFile() const;
		bool			getDatabaseFile() const;
		void			generateMap();
		void			printMap();
};

std::ostream& operator <<( std::ostream& o, const BitcoinExchange& i );

#endif
