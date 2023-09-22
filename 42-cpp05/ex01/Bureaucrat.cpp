#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name( "default" ), _grade( 150 )
{
	std::cout << "Bureaucrat default constructor called!" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name )
{
	std::cout << "Bureaucrat parameter constructor called!" << std::endl;
	if ( grade > 150 )
	{
		throw Bureaucrat::GradeTooLowException();
	}
	if ( grade < 1 )
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name( src.getName() ) , _grade( src.getGrade() )
{
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Bureaucrat &	Bureaucrat::operator=( const Bureaucrat & rhs )
{
	 if ( this != &rhs ) {
	 	this->_grade = rhs.getGrade();
	 }
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ": bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ( "Grade to high.\n" );
}
const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ( "Grade to Low.\n" );
}

void	Bureaucrat::incrementGrade( void )
{
	if ( ( this->_grade - 1 ) < MAX_GRADE )
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void )
{
	if ( ( this->_grade + 1 ) > MIN_GRADE)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
}


void	Bureaucrat::signForm( Form &form )
{
	form.beSigned( *this );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int			Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

/* ************************************************************************** */