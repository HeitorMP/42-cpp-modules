#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->_type = "default";
	std::cout << "Default Animal Constructor called!" << std::endl;
}

Animal::Animal( std::string type )
{
	this->_type = type;
	std::cout << "Param Animal Constructor called!" << std::endl;
}

Animal::Animal( const Animal & src )
{
	this->_type = src._type;
	std::cout << "Animal Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal	&Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return ( *this );
}

std::ostream	&operator<<( std::ostream & o, Animal & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const {
	std::cout << "Animal Sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType() const {
	return ( this->_type );
}

/* ************************************************************************** */