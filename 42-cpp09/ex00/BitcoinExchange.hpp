/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:48:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 16:24:00 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>

class BitcoinExchange
{
    private:

        std::ifstream   _inputFile;

    public:
        BitcoinExchange();
        BitcoinExchange( BitcoinExchange const & src );
        ~BitcoinExchange();
        BitcoinExchange & operator=( BitcoinExchange const & rhs );

        bool load( std::string fileName );
        
};

#endif
