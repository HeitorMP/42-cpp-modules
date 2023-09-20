/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:30:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/20 18:18:05 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;

    Bureaucrat  heitor("Heitor", 150);
    AForm *hmp = new PresidentialPardonForm("home");

    try
    {
        hmp->beSigned( heitor );
    }
    catch( const AForm::GradeTooLowException & err )
    {
        std::cerr << err.what() << '\n';
    }
    
    try
    {
        hmp->execute( heitor );
    }
    catch ( const AForm::FormNotSignedException &err )
    {
        std::cout << err.what() << std::endl;
    }

    std::cout << hmp->getName() << std::endl;

    return ( 0 );
}
