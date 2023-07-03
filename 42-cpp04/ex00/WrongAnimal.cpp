#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	this->_type = "default";
	std::cout << "Default WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type )
{
	this->_type = type;
	std::cout << "Param WrongAnimal Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	this->_type = src._type;
	std::cout << "WrongAnimal Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return ( *this );
}

std::ostream	&operator<<( std::ostream & o, WrongAnimal & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType() const {
	return ( this->_type );
}

/* ************************************************************************** */