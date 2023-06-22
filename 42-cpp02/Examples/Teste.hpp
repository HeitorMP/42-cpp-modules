#ifndef TESTE_HPP
# define TESTE_HPP

# include <iostream>
# include <string>

class Teste
{

	public:

		Teste();
		Teste( Teste const & src );
		~Teste();

		Teste &		operator=( Teste const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Teste const & i );

#endif /* *********************************************************** TESTE_H */