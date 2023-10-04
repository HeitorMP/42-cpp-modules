/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:49:20 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/04 12:19:42 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"
#include <iostream>

template<class T>
Array<T>::Array() : n_size( 0 ), array( new T[0] )
{
	return ;
}

template<class T>
Array<T>::Array( unsigned int size ) : n_size( size )
{
	if ( size < 0 )
		throw std::out_of_range( "Index out of range!" );

	this->array = new T[size];
	for ( int i = 0; i < n_size ; i++ )
		this->array[i] = T();

	return ;
}

template<class T>
Array<T>::Array( Array<T> const & src )
{
	this->array = NULL;
	*this = src;
	return ;
}

template<class T>
Array<T>::~Array()
{
	delete [] this->array;
	return ;
}

template<class T>
Array<T> & Array<T>::operator=( Array<T> const & rhs )
{
	if ( this != &rhs )
	{
		this->n_size = rhs.n_size;
		delete [] this->array;
		
		this->array = new T[this->n_size];
		for ( int i = 0; i < rhs.n_size; i++ )
			this->array[i] = rhs.array[i];
	}
	return ( *this );
}

template<class T>
T & Array<T>::operator[]( unsigned int index )
{
	if ( index < 0 || index >= this->n_size )
		throw std::out_of_range( "Index out of range!" );

	return ( this->array[index] );
}

template<class T>
unsigned int	Array<T>::size( void ) const
{
	return ( this->n_size );
}

#endif