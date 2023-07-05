/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:02:45 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/07/05 11:37:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define INVENTORY_SLOTS 4
# define FLOOR_SLOTS 100

class Character : public ICharacter
{

	public:

		Character();
		Character( std::string const & name );
		Character( Character const & src );
		~Character();

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);

		Character &		operator=( Character const & rhs );

	private:
		
		std::string _name;
		AMateria    *_inventory[INVENTORY_SLOTS];
		AMateria	*_floor[FLOOR_SLOTS];

};

#endif /* ******************************************************* CHARACTER_H */