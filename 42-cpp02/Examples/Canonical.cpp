/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Canonical.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:44 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/22 10:49:23 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Canonical.hpp"
#include <iostream>

Sample::Sample() : _foo( 0 ){
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Sample::Sample( int const n ) : _foo( n ) {
    std::cout << "Parametric constructor called" << std::endl;

    return ;
}

Sample::Sample( Sample const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return ;
}

Sample::~Sample( void ) {
    std::cout << "Default destructor called" << std::endl;

    return ;
}