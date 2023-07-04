/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:20:02 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/04 10:20:27 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		AMateria	*clone() const;

		Cure		&operator=( Cure const & rhs );

		void 		use(ICharacter& target);

	private:

		std::string	_type;

};

std::ostream	&operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************* CURE_H */