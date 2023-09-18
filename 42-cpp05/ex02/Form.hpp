/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/15 14:03:46 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

public:

    Form();
    Form( std::string name, int signGrade, int executeGrade );
    Form( Form const & src );
    ~Form();

    std::string getName( void ) const;
    int         getGradeToSign( void ) const;
    int         getGradeToExecute( void ) const;
    bool        getIsSigned( void ) const;

    void        beSigned( Bureaucrat &bureau );
    
    class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

    Form &		operator=( const Form & rhs );

private:

    const std::string _name;
    bool              _isSigned;
    const int         _gradeToExecute;
    const int         _gradeToSign;

};

std::ostream &	operator<<( std::ostream & o, Form & i );

#endif