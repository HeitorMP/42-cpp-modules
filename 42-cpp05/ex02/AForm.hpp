/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:03:46 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

    AForm();
    AForm( std::string name, int signGrade, int executeGrade );
    AForm( AForm const & src );
    virtual ~AForm();

    std::string getName( void ) const;
    int         getGradeToSign( void ) const;
    int         getGradeToExecute( void ) const;
    bool        getIsSigned( void ) const;
    
    void         beSigned( Bureaucrat &bureau );
    virtual void execute(Bureaucrat const & executor) const = 0;
    
    class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
    class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

    AForm &		operator=( const AForm & rhs );

private:

    const std::string _name;
    bool              _isSigned;
    const int         _gradeToExecute;
    const int         _gradeToSign;

};

std::ostream &	operator<<( std::ostream & o, AForm & i );

#endif