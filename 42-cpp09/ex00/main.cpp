/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:21:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 16:23:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char const *argv[])
{
    if ( argc != 2 )
    {
        std::cerr << "Wrong args!" << std::endl;
        exit ( -1 );
    }

    BitcoinExchange teste();

    
    return 0;
}
