/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:54:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/17 16:01:36 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int N = 10;
    Zombie *horde = zombieHorde(N, "lala");
    for (int index = 0; index < N; index++) {
        std::cout << "Zombie " << index << " announce:" << std::endl;
        horde[index].announce();
    }

    delete [] horde; // this is how dealocate * []
    return 0;
}


