/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:58:20 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 10:44:59 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/reinterpret_cast-in-c-type-casting-operators/
// reinterpret_cast <data_type *>(pointer_variable);

#include "Serializer.hpp"


Serializer::Serializer()
{
	return ;
}

Serializer::Serializer( Serializer const & src )
{
	*this = src;
	return ;
}

Serializer::~Serializer()
{
	return ;
}

Serializer	& Serializer::operator=( Serializer const & rhs )
{
	if ( this != &rhs )
	{
		return ( *this );
	}
	return ( *this );
}

uintptr_t	Serializer::serialize( Data* ptr )
{
	return ( reinterpret_cast <uintptr_t>(ptr) );
}

Data*		Serializer::deserialize( uintptr_t raw )
{
	return ( reinterpret_cast <Data *>(raw) );
}