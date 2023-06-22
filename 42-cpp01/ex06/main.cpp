/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:39:01 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 09:49:27 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char *argv[] )
{
    if (argc != 2) {
        std::cout << "Wrong arguments!" << std::endl;
        return (1);
    }
    Harl harl;

    harl.complain(argv[1]);
    return 0;
}