/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_sort.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:39:32 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/18 12:33:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isValidNumberVector( std::string argument, std::vector<int> &vector )
{
	if ( argument.find_first_not_of( "0123456789" ) != std::string::npos )
	{
		std::cerr << "Invalid positive integer value!" << std::endl;
		return ( false );
	}

	double nb = atol( argument.c_str() );
	if ( nb > std::numeric_limits<int>::max() || nb < 0 )
	{
		std::cerr << "Out of bounds!" << std::endl;
		return ( false );
	}
	if ( find(vector.begin(), vector.end(), nb ) != vector.end() )
	{
		std::cerr << "Repeated element!" << std::endl;
		return ( false );
	}
	return ( true );
}

bool	parseVector( std::vector<int> &vector, int argc, char const *argv[] )
{
	for ( int i = 1; i < argc; i++ )
	{
		std::string argument( argv[i] );
		if ( isValidNumberVector( argument, vector ) )
			vector.push_back( atoi( argv[i] ) );
		else
			return ( false );
	}
	return ( true );
}

void vectorInsert( std::vector<int> &sorted, int const &n )
{
	std::vector<int>::iterator it;

	for ( it = sorted.begin(); it != sorted.end(); it++ )
	{
		if (*it > n)
		{
			sorted.insert(it, n);
			return ;
		}
	}
	sorted.insert(it, n);
}

void vectorInsertionSort( std::vector<int> &vector )
{
	std::vector<int> sortedvector;

	while (!vector.empty())
	{
		int n = vector.front();
		vector.erase(vector.begin());
		vectorInsert( sortedvector, n );
	}
	vector.swap( sortedvector );
}

void mergeInsertionVectorSort( std::vector<int> &vector )
{
	if ( vector.size() <= 5 )
	{
		vectorInsertionSort( vector );
	}
	else
	{
		std::vector<int> left;
		std::vector<int> right;
		
		int	middle = vector.size() / 2;	
		for ( int i = 0; i < middle; i++ )
		{
			left.push_back( vector.front() );
			vector.erase( vector.begin() );
		}
		right = vector;

		mergeInsertionVectorSort( left );
		mergeInsertionVectorSort( right );

		vector.clear();
		std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter( vector ));
	}
}

void	vectorPrint( std::vector<int> &vector )
{
	std::vector<int>::iterator begin = vector.begin();
	std::vector<int>::iterator end = vector.end();
	while ( begin != end )
	{
		std::cout << *begin << " ";
		begin++;
	}
}