#include "Teste.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Teste::Teste()
{
}

Teste::Teste( const Teste & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Teste::~Teste()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Teste &				Teste::operator=( Teste const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Teste const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */