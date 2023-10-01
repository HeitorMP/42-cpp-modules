/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:04:33 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 17:23:35 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter( T *array, int length, void ( *f )( T& ) ) {
	for ( int i = 0; i < length; i++ )
		( *f )( array[i] );
}

#endif