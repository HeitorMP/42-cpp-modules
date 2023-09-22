/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:30:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/22 15:16:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    
    Bureaucrat src( "SRC", 150 );
    Bureaucrat dest( src );
    Bureaucrat copy;
    
    copy = src;
    
    std::cout << src << std::endl;
    std::cout << dest << std::endl;
    std::cout << copy << std::endl;
    

    Bureaucrat heitor("Heitor", 150);
    Bureaucrat joao("Joao", 1);

    try {
        heitor.decrementGrade();
    }
    catch ( const Bureaucrat::GradeTooLowException &err )
    {
        std::cout << err.what();
    }

    try {
        joao.incrementGrade();
    }
    catch ( const Bureaucrat::GradeTooHighException &err )
    {
        std::cout << err.what();
    }

    try {
        heitor.incrementGrade();
    }
    catch ( const Bureaucrat::GradeTooHighException &err )
    {
        std::cout << err.what();
    }

    try {
        joao.decrementGrade();
    }
    catch ( const Bureaucrat::GradeTooLowException &err )
    {
        std::cout << err.what();
    }

    std::cout << heitor << std::endl;
    std::cout << joao << std::endl;

    Bureaucrat heitor1("Heitor1", 100);
    Bureaucrat joao1("Joao1", 5);
    try
    {
        heitor1.decrementGrade();
    }
    catch ( const Bureaucrat::GradeTooLowException &err )
    {
        std::cerr << err.what();
    }

    try
    {
        joao1.incrementGrade();
    }
    catch ( const Bureaucrat::GradeTooHighException &err )
    {
        std::cerr << err.what();
    }

    std::cout << heitor1 << std::endl;
    std::cout << joao1 << std::endl;

    try
    {
        Bureaucrat teste( "teste", -1 );
    }
    catch( const std::exception& err )
    {
        std::cerr << err.what() << '\n';
    }
    
    try
    {
        Bureaucrat teste1( "teste1", 151 );
    }
    catch(const std::exception& err)
    {
        std::cerr << err.what() << '\n';
    }

    return ( 0 );
}
