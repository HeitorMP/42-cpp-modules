/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:02:41 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/05 15:53:59 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name( "Default" )
{
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < FLOOR_SLOTS; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < FLOOR_SLOTS; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for ( int i = 0; i < INVENTORY_SLOTS; i++) {
		delete this->_inventory[i];
	}
	for ( int i = 0; i < FLOOR_SLOTS; i++) {
		delete this->_floor[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character	&Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		for (int i = 0; i < INVENTORY_SLOTS; i++) {
			if (rhs._inventory[i] != NULL) {
				delete ( this->_inventory[i] );
				this->_inventory[i] = rhs._inventory[i];
			}
		}
		for (int i = 0; i < FLOOR_SLOTS; i++) {
			if (rhs._inventory[i] != NULL) {
				delete ( this->_floor[i] );
				this->_floor[i] = rhs._floor[i];
			}
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const {
	return (this->_name);
}

void		Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SLOTS; i++) {
		if ( this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void 		Character::unequip(int idx) {

	if (idx < 0 || idx >= INVENTORY_SLOTS) {
		return ;
	}
	if ( this->_inventory[idx] != NULL ) {
		for ( int i = 0; i < FLOOR_SLOTS; i++ ) {
			if ( this->_floor[i] == NULL) {
				this->_floor[i] = this->_inventory[idx];
			}
		}
		this->_inventory[idx] = NULL;
	}
}

void		Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= INVENTORY_SLOTS)
		return ;
	if ( this->_inventory[idx] != NULL ) {
		this->_inventory[idx]->use(target);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */