/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:20:24 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/05 00:22:28 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n( 0 )
{
	return ;
}

Span::Span( unsigned int n ) : n( n )
{
	return ;
}

Span::Span( Span const & src )
{
	*this = src;
	return ;
}

Span::~Span()
{
	return ;
}

Span & Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->n = rhs.n;
		this->spanList = rhs.spanList;
	}
	return ( *this );
}


void	Span::addNumber( int const & number )
{
	if ( this->spanList.size() < this->n )
		this->spanList.push_back( number );
	else
		throw std::runtime_error( "Out of vector limits" );
}

void	Span::fill( int const & number )
{
	srand( time( NULL ) );
	for ( int i = 0; i < number; i++ )
	{
		this->addNumber( rand() % ( number * 100 ) );
	}
}

std::vector<int>	Span::getVector( void ) const
{
	return ( this->spanList );
}
unsigned int		Span::getN( void ) const
{
	return ( this->n );
}

std::ostream& operator <<(std::ostream& o, const Span& span)
{
	std::vector<int>	temp_vec = span.getVector();
	unsigned int		temp_n = span.getN();
	
	std::cout << "Total size: " << temp_n << std::endl;
	std::cout << "Filled size: " << temp_vec.size() << std::endl;
	for ( int i = 0; i < (int)temp_vec.size(); i++ )
	{
		std::cout << "index " << i << ": " << temp_vec[i] << std::endl;
	}
	return ( o );
}