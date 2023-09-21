/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:20:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/21 15:23:12 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : AForm( target, 72, 45 ), _target( target )
{
    std::cout << this->_target << " RobotomyRequestForm was created!" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
{
    std::cout << "Copy RobotomyRequestForm called!" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called!" << std::endl;
    return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
    if ( this != &rhs )
    {
        return ( *this );
    }
    return ( *this );
}

std::string RobotomyRequestForm::getTarget( void ) const
{
    return ( this->_target );
}

void        RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
    if ( executor.getGrade() > this->getGradeToExecute() )
    {
        throw AForm::GradeTooLowException();
    }
    if ( !this->getIsSigned() )
    {
        throw AForm::FormNotSignedException();
    }

    std::cout << "Bzzzzzzzzzzzzzzzz...,  Clank... Clank... Clank..." << std::endl;
    srand( time( NULL ) );
    if( rand() % 2 == 1)
    {
        std::cout << this->_target << " has been robotomized successfull!" << std::endl;
    }
    else
    {
        std::cout << this->_target << " was not successfully robotomized!" << std::endl;
    }
}

std::ostream    &operator<<( std::ostream &o, RobotomyRequestForm & i )
{
    o << i.getName() << std::endl;
    o << i.getIsSigned() << std::endl;
    o << i.getIsSigned() << std::endl;

    return ( o );
}