#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria( std::string const & type ) : _type(type)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/* AMateria	&AMateria::operator=( AMateria const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
} */

/* std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	//o << "Value = " << i.getValue();
	return o;
} */


/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */