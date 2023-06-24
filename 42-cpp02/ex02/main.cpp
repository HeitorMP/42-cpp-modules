/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:29:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/23 09:54:07 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int main( void ) {

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

   /*  Fixed a(0);
    Fixed c(1);
    Fixed const b( 10 );

    std::cout << "a " << a << std::endl;
    std::cout << "b " << b << std::endl;

    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;


   
    std::cout << (a + b) << std::endl;
    std::cout << (a - b) << std::endl;
    std::cout << (a * b) << std::endl;
    std::cout << (a / b) << std::endl;
    
    
    std::cout << "++a " << (++a) << std::endl;
    std::cout << "a++ " << (a++) << std::endl;


    Fixed const d(10);
    Fixed const e(5);
    std::cout << "min: " << Fixed::min(a, c) << std::endl;
    std::cout << "max: " << Fixed::max(a, c) << std::endl;
    std::cout << "min: " << Fixed::min(d, e) << std::endl;
    std::cout << "max: " << Fixed::max(d, e) << std::endl;
 */

    return 0;
}