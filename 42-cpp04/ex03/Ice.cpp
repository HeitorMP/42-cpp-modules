#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::Ice( const Ice & src ) : AMateria("ice")
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice	&Ice::operator=( Ice const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria	*Ice::clone() const {
	AMateria *tmp = new Ice();
	return (tmp);
}

void 		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */