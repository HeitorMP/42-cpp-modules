#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	this->_type = "default";
	std::cout << "Default AAnimal Constructor called!" << std::endl;
}

AAnimal::AAnimal( std::string type )
{
	this->_type = type;
	std::cout << "Param AAnimal Constructor called!" << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	this->_type = src._type;
	std::cout << "AAnimal Copy Constructor called!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal	&AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return ( *this );
}

std::ostream	&operator<<( std::ostream & o, AAnimal & i )
{
	o << "Type = " << i.getType();
	return ( o );
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound( void ) const {
	std::cout << "AAnimal Sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AAnimal::getType() const {
	return ( this->_type );
}

/* ************************************************************************** */