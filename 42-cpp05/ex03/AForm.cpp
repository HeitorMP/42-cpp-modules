/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:00:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:03:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Constructors */
AForm::AForm() : _name("default"), _gradeToExecute(150), _gradeToSign(150)
{
    std::cout << "AForm default constructor called!" << std::endl;
    this->_isSigned = false;
    return ;
}

AForm::AForm( std::string name, int executeGrade, int signGrade) : _name(name), _gradeToExecute(executeGrade), _gradeToSign(signGrade)
{
    std::cout << "AForm parameter constructor called!" << std::endl;
    if ( executeGrade > 150  || signGrade > 150 )
	{
		throw AForm::GradeTooLowException();
	}
	if ( executeGrade < 1  || signGrade < 1 )
	{
		throw AForm::GradeTooHighException();
	}
    this->_isSigned = false;
    return ;
}

AForm::AForm( AForm const & src ) : _name( src.getName() ), _gradeToExecute( src.getGradeToExecute() ), _gradeToSign( src.getGradeToSign() )
{
    std::cout << "AForm copy constructor called!" << std::endl;
    *this = src;
    return ;
}

AForm::~AForm() {
    return ;
}

/* Getters */
std::string     AForm::getName( void ) const
{
    return ( this->_name );
}

int             AForm::getGradeToSign( void ) const
{
    return ( this->_gradeToSign );
}

int             AForm::getGradeToExecute( void ) const
{
    return ( this->_gradeToExecute );
}

bool            AForm::getIsSigned( void ) const
{
    return ( this->_isSigned );
}

/* Methods */
void            AForm::beSigned( Bureaucrat &bureau )
{
    if ( this->_isSigned )
    {
        std::cout << "This Aform is already signed!" << std::endl;
    }
    else if ( bureau.getGrade() > this->_gradeToSign )
    {
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::cout << "AForm signed successfully by " << bureau.getName() << "!" << std::endl;
        this->_isSigned = true;
    }
}

const char      *AForm::GradeTooHighException::what() const throw() {
	return ( "Grade too high." );
}
const char      *AForm::GradeTooLowException::what() const throw() {
	return ( "Grade too low." );
}
const char      *AForm::FormNotSignedException::what() const throw() {
	return ( "The Form is not signed." );
}

/* OVERLOADS */
AForm &		AForm::operator=( const AForm & rhs )
{
    if (this != &rhs)
    {
        this->_isSigned = rhs.getIsSigned();
    }
    return ( *this );
}

std::ostream &  operator<<( std::ostream & o, AForm & i )
{
	o << "AForm Name: " << i.getName() << std::endl;
	o << "AForm is signed?: " << i.getIsSigned() << std::endl;
	o << "Grade to execute: " << i.getGradeToExecute() << std::endl;;
	o << "Grade to sign: " << i.getGradeToSign();
	return o;
}

