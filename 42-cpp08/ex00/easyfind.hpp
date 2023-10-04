/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:31:26 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/04 13:56:17 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <list>
# include <vector>

template < typename T >
void    easyfind( T container, int value )
{
	//error: need ‘typename’ before ‘T::iterator’ because ‘T’ is a dependent scope
	typename T::iterator it = std::find( container.begin(), container.end(), value);

	// https://stackoverflow.com/questions/26995725/how-to-convert-vector-iterator-to-int-in-c
	int pos = std::distance( container.begin(), it );
	( it != container.end() ) ? std::cout << "Found at position " << pos << std::endl : std::cout << "Not found." << std::endl;
}

#endif