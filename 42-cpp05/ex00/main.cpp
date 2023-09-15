/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:30:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:37:37 by hmaciel-         ###   ########.fr       */
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


    Bureaucrat teste("teste", -1);
    Bureaucrat teste1("teste1", 151);
    std::cout << teste << std::endl;
    std::cout << teste1 << std::endl;
    return ( 0 );
}
