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

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    Bureaucrat heitor("Heitor", 150);
    Bureaucrat joao("Joao", 1);

    try {
        heitor.decrementGrade();
    }
    catch ( const Bureaucrat::GradeTooLowException &err ) {
        std::cout << err.what();
    }

    try {
        joao.incrementGrade();
    }
    catch ( const Bureaucrat::GradeTooHighException &err ) {
        std::cout << err.what();
    }

    std::cout << heitor << std::endl;
    std::cout << joao << std::endl;

    Bureaucrat heitor1("Heitor1", 100);
    Bureaucrat joao1("Joao1", 5);
    try {
        heitor1.decrementGrade();
    }
    catch ( const Bureaucrat::GradeTooLowException &err ) {
        std::cout << err.what();
    }

    try {
        joao1.incrementGrade();
    }
    catch ( const Bureaucrat::GradeTooHighException &err ) {
        std::cout << err.what();
    }

    std::cout << heitor1 << std::endl;
    std::cout << joao1 << std::endl;
    
    return ( 0 );
}
