/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:15:00 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/21 15:31:04 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructors */
ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) : AForm( target + "ShrubberyCreationForm", 145, 137 ), _target( target )
{
    std::cout << this->_target << " ShrubberyCreationForm was created!" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
{
    std::cout << " ShrubberyCreationForm copy constructor called!" << std::endl;
    *this = src;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << " ShrubberyCreationForm destructor called!" << std::endl;
    return ;
}

const char  *ShrubberyCreationForm::CannotOpenFileException::what() const throw() {
	return ( "Cannot open file!" );
}

void        ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
    if ( !this->getIsSigned() )
    {
        throw AForm::FormNotSignedException();
    }
    if ( executor.getGrade() > this->getGradeToExecute() )
    {
        throw AForm::GradeTooLowException();
    }

    std::ofstream   fileTarget;
    
    fileTarget.open( ( _target + SUFFIX ).c_str(), std::ios::out ); 
    if ( !fileTarget )
    {
        throw ShrubberyCreationForm::CannotOpenFileException();
    }
    fileTarget << ASCIITreeGenerator();
    fileTarget.close();
    std::cout << "Shrubbery file was create!" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
    if ( this != &rhs )
    {
        return ( *this );
    }
    return ( *this );
}
