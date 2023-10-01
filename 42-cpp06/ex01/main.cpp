/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:16:43 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 10:50:35 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*{
	std::string	name;
	std::string	weapon;
	std::string	armor;
	std::string	shield;
	int			xp;

}	Data;*/

#include "Serializer.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	Data	hero;
	hero.name = "Gungnir";
	hero.weapon = "Long Sword";
	hero.armor = "Leather Armor";
	hero.shield = "Brass Armor";
	hero.xp = 100;

	std::cout << "Name: " << hero.name << std::endl;
	std::cout << "Weapon: " << hero.weapon << std::endl;
	std::cout << "Armor: " << hero.armor << std::endl;
	std::cout << "Shield: " << hero.shield << std::endl;
	std::cout << "XP: " << hero.xp << "\n" << std::endl;

	std::cout << "Before serialize: " << &hero << std::endl;
	
	uintptr_t serializedHero = Serializer::serialize( &hero );
	std::cout << "After serialize: " << serializedHero << std::endl;
	std::cout << "After serialize address: " << &serializedHero << std::endl;


	Data	*deserializedHero;
	std::cout << "Copy before deserialize: " << &deserializedHero << std::endl;
	
	deserializedHero = Serializer::deserialize( serializedHero );
	std::cout << "Copy after deserialize: " << deserializedHero << "\n" << std::endl;

	std::cout << "Name: " << deserializedHero->name << std::endl;
	std::cout << "Weapon: " << deserializedHero->weapon << std::endl;
	std::cout << "Armor: " << deserializedHero->armor << std::endl;
	std::cout << "Shield: " << deserializedHero->shield << std::endl;
	std::cout << "XP: " << deserializedHero->xp << "\n" << std::endl;

	return ( 0 );
}
