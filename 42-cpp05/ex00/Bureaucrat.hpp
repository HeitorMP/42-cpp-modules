#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# define MAX_GRADE = 1;
# define MIN_GRADE = 150;

class Bureaucrat
{

	public:

		Bureaucrat(const std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string	getName( void );
		int					getGrade( void );

		class GradeTooHighException : {
		public:
   			GradeTooHighException(const std::string& msg);
  			~GradeTooHighException();

   			std::string getMessage() const {return(msg_);}
		private:
   			std::string msg_;
		};


		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:

		const std::string	_name;
		int					_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i );

#endif /* ****************************************************** BUREAUCRAT_H */