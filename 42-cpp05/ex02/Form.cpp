/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:00:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:03:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors */
Form::Form() : _name("default"), _gradeToExecute(150), _gradeToSign(150)
{
    std::cout << "Form default constructor called!" << std::endl;
    this->_isSigned = false;
    return ;
}

Form::Form( std::string name, int executeGrade, int signGrade) : _name(name), _gradeToExecute(executeGrade), _gradeToSign(signGrade)
{
    std::cout << "Form parameter constructor called!" << std::endl;
    this->_isSigned = false;
    return ;
}

Form::Form( Form const & src ) : _name( src.getName() ), _gradeToExecute( src.getGradeToExecute() ), _gradeToSign( src.getGradeToSign() )
{
    std::cout << "Form copy constructor called!" << std::endl;
    *this = src;
    return ;
}

Form::~Form() {
    return ;
}

/* Getters */
std::string     Form::getName( void ) const
{
    return ( this->_name );
}

int             Form::getGradeToSign( void ) const
{
    return ( this->_gradeToSign );
}

int             Form::getGradeToExecute( void ) const
{
    return ( this->_gradeToExecute );
}

bool            Form::getIsSigned( void ) const
{
    return ( this->_isSigned );
}

/* Methods */
void            Form::beSigned( Bureaucrat &bureau )
{
    if (this->_isSigned)
    {
        std::cout << "This form is already signed!" << std::endl;
    }
    else if (bureau.getGrade() > this->_gradeToSign )
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        std::cout << "Form signed successfully by " << bureau.getName() << "!" << std::endl;
        this->_isSigned = true;
    }
}

const char      *Form::GradeTooHighException::what() const throw() {
	return ("Grade too high.\n");
}
const char      *Form::GradeTooLowException::what() const throw() {
	return ("Grade too low.\n");
}

/* OVERLOADS */
Form &		Form::operator=( const Form & rhs )
{
    if (this != &rhs)
    {
        this->_isSigned = rhs.getIsSigned();
    }
    return ( *this );
}

std::ostream &  operator<<( std::ostream & o, Form & i )
{
	o << "Form Name: " << i.getName() << std::endl;
	o << "Form is signed?: " << i.getIsSigned() << std::endl;
	o << "Grade to execute: " << i.getGradeToExecute() << std::endl;;
	o << "Grade to sign: " << i.getGradeToSign();
	return o;
}

