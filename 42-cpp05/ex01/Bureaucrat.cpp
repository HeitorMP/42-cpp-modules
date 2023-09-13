#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ), _grade( grade ) {
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) {
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Bureaucrat &				Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if ( this != &rhs ) {
		(std::string)this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Cannot increment the grade higher than 1.\n");
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Cannot decrement the grade lower than 150.\n");
}

void	Bureaucrat::incrementGrade( void ) {
	if ( ( this->_grade - 1 ) < MAX_GRADE ) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade--;
}

void	Bureaucrat::decrementGrade( void ) {
	if ( ( this->_grade + 1 ) > MIN_GRADE) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

/* ************************************************************************** */