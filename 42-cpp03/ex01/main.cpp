/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:05:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/30 17:45:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    ScavTrap    t1("heitor");
    ScavTrap    t2("miguel");
    ScavTrap    t3;

    t1.attack("teste");
    t2.guardGate();

    t3 = t1;
    std::cout << t3 << std::endl;
    return 0;
}
