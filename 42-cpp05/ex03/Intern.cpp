/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:23:20 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/22 19:36:21 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default intern constructor called!" << std::endl;
    return ;
}

Intern::Intern( Intern const & src)
{
    *this = src;
    return ;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called!" << std::endl;
    return ;
}

Intern & Intern::operator=( Intern const &rhs )
{
    if ( this != &rhs )
    {
        return ( *this );
    }
    return ( *this );
}

AForm   *   makePresidential( std::string const &target ) { return ( new PresidentialPardonForm( target ) );}
AForm   *   makeRobotomy( std::string const &target ) { return ( new RobotomyRequestForm( target ) );}
AForm   *   makeShrubbery( std::string const &target ) { return ( new ShrubberyCreationForm( target ) );}

typedef AForm *(*formSelector) ( std::string const &target );

AForm   * Intern::makeForm( std::string const &form, std::string const &target )
{

    if ( form.size() <= 0 || target.size() <= 0 )
        return ( NULL );
    std::string formList[] = { "PresidentialPardonForm", "RobotomyRequestForm", "PresidentialPardonForm" };
    formSelector funcList[] = {
        makePresidential,
        makeRobotomy,
        makeShrubbery
    };
    
    for ( int i = 0; i < (int)formList->size(); i++ )
    {
        if ( form == formList[i] )
            return ( funcList[i]( target ) );
    };

    std::cout << "Form does not exist!" << std::endl;
    return ( NULL );
}