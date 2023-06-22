/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:58:12 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/17 19:07:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    ;
}

Weapon::Weapon(std::string newType) {
    this->type = newType;
}

void Weapon::setType(std::string newType) {
    this->type = newType;
}

const std::string& Weapon::getType() {
    return (this->type);
}

Weapon::~Weapon() {
    ;
}