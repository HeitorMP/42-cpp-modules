/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:30:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/06 15:22:46 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    Bureaucrat  heitor("Heitor", 150);
    Form        formulario("form1", 100, 100);

    try {
        formulario.beSigned(heitor);
    }
    catch ( const Form::GradeTooLowException &err ) {
        std::cout << err.what();
    }

    std::cout << formulario << std::endl;
    
    Bureaucrat  president("President", 1);
    try {
        formulario.beSigned(president);
    }
    catch ( const Form::GradeTooLowException &err ) {
        std::cout << err.what();
    }
    std::cout << formulario << std::endl;
    return ( 0 );
}
