/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:53:23 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/17 19:07:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

class Weapon {
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string newType);
    const std::string & getType();
    void setType(std::string newType);
    ~Weapon();
};

#endif