#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( std::string type );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal				&operator=( AAnimal const & rhs );

		std::string			getType( void ) const;

		virtual void 		makeSound() const = 0;

	protected:

		std::string	_type;

};

std::ostream		&operator<<( std::ostream & o, AAnimal & i );

#endif /* ********************************************************** ANIMAL_H */