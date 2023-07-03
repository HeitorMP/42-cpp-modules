/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:07:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/03 10:54:20 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "Default Scav Constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "Scav " << this->_name << " created with param constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;
	std::cout << "ScavTrap copy constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap	&ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoint = rhs._energyPoint;
	}
	std::cout << "ScavTrap has been copied with copy assignment operator overload!" << std::endl;
	return *this;
}

std::ostream	&operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "------------------------------------------------------------------------" << std::endl;
	o << "ScavTrap " << i.getName() << " Hit Points: " << i.getHitPoint() << std::endl;
	o << "ScavTrap " << i.getName() << " Energy Points: " << i.getEnergy() << std::endl;
	o << "ScavTrap " << i.getName() << " Attack Power: " << i.getAttackDamage() << std::endl;
	o << "------------------------------------------------------------------------" << std::flush;
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	ScavTrap::attack(const std::string& target) {

	if (this->_energyPoint > 0 && this->_hitPoint > 0) {
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	 std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */