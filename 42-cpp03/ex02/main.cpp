/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:05:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/03 10:55:49 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    FragTrap    t1("heitor");
    FragTrap    t2("miguel");
    FragTrap    t3;

    t1.attack("teste");
    t3 = t1;
    std::cout << t3 << std::endl;
    return 0;
}
