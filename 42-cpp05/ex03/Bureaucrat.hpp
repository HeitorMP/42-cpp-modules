/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:03:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/09/22 19:52:41 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string			getName( void ) const;
		int					getGrade( void ) const;
		
		void 				incrementGrade( void );
		void				decrementGrade( void );
		void 				signForm( AForm &form );
		void				executeForm( AForm const & form );

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		Bureaucrat &		operator=( const Bureaucrat & rhs );

	private:

		const std::string	_name;
		int					_grade;

		static const int			MAX_GRADE = 1;
		static const int			MIN_GRADE = 150;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i );

#endif /* ****************************************************** BUREAUCRAT_H */
