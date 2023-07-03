/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:56:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/02 12:52:36 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    AAnimal h;
    
    AAnimal* j = new Dog();
    AAnimal* i = new Cat();
    delete j; //should not create a leak
    delete i;
    return 0;

}
