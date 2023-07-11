/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:56:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/10 09:51:28 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, char const *argv[])
{
  (void)argc;
  (void)argv;


  Dog basic;
  {
    Dog tmp = basic;
  }


  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j; //should not create a leak
  delete i;

  Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
  for (int i = 0; i < 4; i++)
  delete animals[i];


  Cat* cat = new Cat();
  Cat* copy_cat = new Cat(*cat);

  std::cout << cat->getBrain() << std::endl;
  delete ( cat );

  std::cout << copy_cat->getBrain() << std::endl;
  delete ( copy_cat );
  return 0;

}
