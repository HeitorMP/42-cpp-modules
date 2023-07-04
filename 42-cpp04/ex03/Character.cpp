/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:02:41 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/04 14:59:05 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name( "Default" )
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	for (int i = 0; i < 100; i++) {
		this->_floor[i] = NULL;
	}
}

Character::Character( const Character & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const {
	return (this->_name);
}

void		Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if ( this->_inventory[i] != NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void 		Character::unequip(int idx) {
	if ( this->_inventory[idx] != NULL) {
		this->_inventory[idx] = NULL;
	} //need to save the pointer.
}

void		Character::use(int idx, ICharacter& target) {
	this->_inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */