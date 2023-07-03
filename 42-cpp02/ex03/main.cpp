/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:15:58 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/29 14:31:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main(int argc, char const *argv[])
{
    (void)argc; (void)argv;

    bool teste;

    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 0) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 1) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 2) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 3) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 4) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(5, 4) );
    std::cout << "Is it in?: " << teste << std::endl;

    return 0;
}