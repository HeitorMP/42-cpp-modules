/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:50:26 by crypto            #+#    #+#             */
/*   Updated: 2023/07/03 10:56:21 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name"), ScavTrap( name ), FragTrap( name )
{
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "Diamond Param Constructor called " << this->_name << " was created!" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	this->_name = rhs._name;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destroyed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoint = obj._hitPoint;
		this->_energyPoint = obj._energyPoint;
		this->_attackDamage = obj._attackDamage;
		this->ClapTrap::_name = obj.ClapTrap::_name;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

std::ostream	&operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "------------------------------------------------------------------------" << std::endl;
	o << "DiamondTrap " << i.getName() << " Hit Points: " << i.getHitPoint() << std::endl;
	o << "DiamondTrap " << i.getName() << " Energy Points: " << i.getEnergy() << std::endl;
	o << "DiamondTrap " << i.getName() << " Attack Power: " << i.getAttackDamage() << std::endl;
	o << "------------------------------------------------------------------------" << std::flush;
	return ( o );

}