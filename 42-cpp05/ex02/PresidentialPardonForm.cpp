/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:20:40 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/21 15:23:12 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : AForm( target, 25, 5 ), _target( target )
{
    std::cout << this->_target << " PresidentialPardonForm was created!" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
{
    std::cout << "Copy PresidentialPardonForm called!" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called!" << std::endl;
    return ;
}


PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
    if ( this != &rhs )
    {
        return ( *this );
    }
    return ( *this );
}

std::string PresidentialPardonForm::getTarget( void ) const
{
    return ( this->_target );
}

void        PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
    if ( executor.getGrade() > this->getGradeToExecute() )
    {
        throw AForm::GradeTooLowException();
    }
    if ( !this->getIsSigned() )
    {
        throw AForm::FormNotSignedException();
    }
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream    &operator<<( std::ostream &o, PresidentialPardonForm & i )
{
    o << i.getName() << std::endl;
    o << i.getIsSigned() << std::endl;
    o << i.getIsSigned() << std::endl;

    return ( o );
}