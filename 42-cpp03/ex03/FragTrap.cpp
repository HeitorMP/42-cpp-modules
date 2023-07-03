/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:44:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/03 11:09:39 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{

	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap Constructor called" << std::endl;

}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{

	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Param Constructor called!" << std::endl;
	
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{

	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_energyPoint = src._energyPoint;
	this->_attackDamage = src._attackDamage;
	std::cout << "FragTrap Copy Constructor called!" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap	&FragTrap::operator=( FragTrap const & rhs )
{
	
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoint = rhs._energyPoint;
	}
	std::cout << "FragTrap has been copied with copy assignment operator overload!" << std::endl;
	return ( *this );

}

std::ostream	&operator<<( std::ostream & o, FragTrap const & i )
{
	o << "------------------------------------------------------------------------" << std::endl;
	o << "FragTrap " << i.getName() << " Hit Points: " << i.getHitPoint() << std::endl;
	o << "FragTrap " << i.getName() << " Energy Points: " << i.getEnergy() << std::endl;
	o << "FragTrap " << i.getName() << " Attack Power: " << i.getAttackDamage() << std::endl;
	o << "------------------------------------------------------------------------" << std::flush;
	return ( o );

}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFive() {

	if (this->_energyPoint > 0 && this->_hitPoint > 0) {
		this->_energyPoint -= 1;
		std::cout << "FragTrap " << this->_name << " hi-five triggered!" << std::endl;
	} else {
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
	}
	
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */