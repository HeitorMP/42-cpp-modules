/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:05:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/30 16:16:29 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    ClapTrap a( "heitor" );
    ClapTrap c( "miguel" );
    ClapTrap b;

    b = a;
    b.attack("miguel");
    c.takeDamage(0);
    
    c.attack("heitor");
    b.takeDamage(0);

    for (int i = 0; i < 10; i++) {
        c.attack("heitor");
    }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}
