/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_sort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:39:32 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/18 12:33:36 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isValidNumberDeque( std::string argument, std::deque<int> &deque )
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
	if ( find(deque.begin(), deque.end(), nb ) != deque.end() )
	{
		std::cerr << "Repeated element!" << std::endl;
		return ( false );
	}
	return ( true );
}

bool	parseDeque( std::deque<int> &deque, int argc, char const *argv[] )
{
	for ( int i = 1; i < argc; i++ )
	{
		std::string argument( argv[i] );
		if ( isValidNumberDeque( argument, deque ) )
			deque.push_back( atoi( argv[i] ) );
		else
			return ( false );
	}
	return ( true );
}

void dequeInsert( std::deque<int> &sorted, int const &n )
{
	std::deque<int>::iterator it;

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

void dequeInsertionSort( std::deque<int> &deque )
{
	std::deque<int> sortedDeque;

	while (!deque.empty())
	{
		int n = deque.front();
		deque.pop_front();
		dequeInsert( sortedDeque, n );
	}
	deque.swap( sortedDeque );
}

void mergeInsertionDequeSort( std::deque<int> &deque )
{
	if ( deque.size() <= 5 )
	{
		dequeInsertionSort( deque );
		return ;
	}
	std::deque<int> left;
	std::deque<int> right;
	
	int	middle = deque.size() / 2;
	for ( int i = 0; i < middle; i++ )
	{
		left.push_back( deque.front() );
		deque.pop_front();
	}
	right = deque;

	mergeInsertionDequeSort( left );
	mergeInsertionDequeSort( right );

	deque.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(deque));
}

void	dequePrint( std::deque<int> &deque )
{
	std::deque<int>::iterator begin = deque.begin();
	std::deque<int>::iterator end = deque.end();
	
	while ( begin != end )
	{
		std::cout << *begin << " ";
		begin++;
	}
}