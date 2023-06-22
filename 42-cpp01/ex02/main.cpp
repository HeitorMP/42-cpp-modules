/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:16:50 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/17 17:38:56 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; // pointer as i know!
    std::string &stringREF = str; // just a alias for str;

    std::cout << "The memory address of the string variable: " << &str << std::endl; // & to shoe address
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl; // cout will print adress if variable is a pointer
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl; // same for str

    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl; // * to print value same as C.
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl; // same for str

    return 0;
}
