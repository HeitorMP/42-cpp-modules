/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 07:05:38 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/01 14:20:43 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( ) : _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap Constructor called, a no name ClapTrap was created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap Param Constructor called, " << name << " was created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src ) : _name(src._name), _hitPoint(src._hitPoint), _energyPoint(src._energyPoint), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap Copy Constructor called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called, " << this->_name << " was destroyed!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap	&ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoint = rhs._energyPoint;
	}
	std::cout << "ClapTrap has been copied with copy assignment operator overload!" << std::endl;
	return *this;
}

std::ostream	&operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "------------------------------------------------------------------------" << std::endl;
	o << "ClapTrap " << i.getName() << " Hit Points: " << i.getHitPoint() << std::endl;
	o << "ClapTrap " << i.getName() << " Energy Points: " << i.getEnergy() << std::endl;
	o << "ClapTrap " << i.getName() << " Attack Power: " << i.getAttackDamage() << std::endl;
	o << "------------------------------------------------------------------------" << std::flush;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack( const std::string& target ) {

	if (this->_energyPoint > 0 && this->_hitPoint > 0) {
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	}
	
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void ClapTrap::takeDamage(unsigned int amount) {

	this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " was hit! Hit points decreased to: " << this->_hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		this->_energyPoint -= 1;
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " was repaired! Hit points increased to: " << this->_hitPoint << std::endl;
	}

}

int	ClapTrap::getHitPoint() const {
	return ( this->_hitPoint );
}
int	ClapTrap::getEnergy() const {
	return ( this->_energyPoint );
}
int	ClapTrap::getAttackDamage() const {
	return ( this->_attackDamage );
}
std::string	ClapTrap::getName() const {
	return ( this->_name );
}

/* ************************************************************************** */