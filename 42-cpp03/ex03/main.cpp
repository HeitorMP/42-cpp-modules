/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:05:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/01 14:34:37 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    DiamondTrap h("heitor");
    DiamondTrap a("miguel");
    DiamondTrap c("joao");

    h.attack("teste");

    a = h;

    c.whoAmI();
    a.whoAmI();

    a.guardGate();

    std::cout << h << std::endl;
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    return 0;
}
