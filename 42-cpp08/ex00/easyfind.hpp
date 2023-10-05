/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:31:26 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/05 07:45:04 by hmaciel-         ###   ########.fr       */
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
int		easyfind( T container, int value )
{
	//error: need ‘typename’ befoare ‘T::itertor’ because ‘T’ is a dependent scope
	typename T::iterator it = std::find( container.begin(), container.end(), value);
	
	if ( it == container.end() )
		return ( -1 );
	// https://stackoverflow.com/questions/26995725/how-to-convert-vector-iterator-to-int-in-c
	return ( std::distance( container.begin(), it ) );
}

#endif