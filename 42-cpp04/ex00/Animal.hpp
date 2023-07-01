#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( std::string type );
		Animal( Animal const & src );
		~Animal();

		Animal				&operator=( Animal const & rhs );

		std::string			getType( void ) const;

		virtual void		makeSound( void ) const;

	protected:

		std::string	_type;

};

std::ostream		&operator<<( std::ostream & o, Animal & i );

#endif /* ********************************************************** ANIMAL_H */