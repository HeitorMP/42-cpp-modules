/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:17:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/13 20:23:13 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form {

public:
    Form();
    Form( const std::string name, int grade);
    Form( Form const & src );
    ~Form();

    std::string getName( void ) const;
    int         getGrade( void ) const;
    bool        getSigned( void ) const;
    
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
    int               _gradeToExecute;

};

std::ostream &	operator<<( std::ostream & o, Form & i );

#endif