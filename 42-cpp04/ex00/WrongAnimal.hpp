#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal				&operator=( WrongAnimal const & rhs );

		std::string			getType( void ) const;

		virtual void		makeSound( void ) const;

	protected:

		std::string	_type;

};

std::ostream		&operator<<( std::ostream & o, WrongAnimal & i );

#endif /* ********************************************************** ANIMAL_H */