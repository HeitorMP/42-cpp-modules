#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		AMateria	*clone() const;

		Ice			&operator=( Ice const & rhs );

		void 		use(ICharacter& target);

	private:

		std::string	_type;

};

std::ostream	&operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */