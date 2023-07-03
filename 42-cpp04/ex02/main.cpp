/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:56:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/03 21:36:22 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    //AAnimal h; do not work
    
    AAnimal* j = new Dog();
    AAnimal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j; //should not create a leak
    delete i;

    return 0;

}
