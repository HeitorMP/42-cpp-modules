/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:47 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/18 12:48:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://iq.opengenus.org/merge-insertion-sort/

#include "PmergeMe.hpp"
#include <sys/time.h>

static	void	printResultDeque( std::deque<int> &deque ,int argc )
{
	struct timeval begin, end;
	
	gettimeofday(&begin, 0);

	std::cout << "Before: " << std::flush;
	dequePrint( deque );
	std::cout << std::endl;

	mergeInsertionDequeSort( deque );

	std::cout << "After: " << std::flush;
	dequePrint( deque );
	std::cout << std::endl;

	gettimeofday(&end, 0);

	long microseconds = end.tv_usec - begin.tv_usec;
	double elapsed = microseconds / 1000000.0;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque " << elapsed << " us" << std::endl;
}

static	void	printResultVector( std::vector<int> &vector ,int argc )
{
	struct timeval begin, end;
	
	gettimeofday(&begin, 0);

	std::cout << "Before: " << std::flush;
	vectorPrint( vector );
	std::cout << std::endl;

	mergeInsertionVectorSort( vector );

	std::cout << "After: " << std::flush;
	vectorPrint( vector );
	std::cout << std::endl;

	gettimeofday(&end, 0);
	long microseconds = end.tv_usec - begin.tv_usec;
	double elapsed = microseconds / 1000000.0;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector " << elapsed << " us" << std::endl;

}

int main(int argc, char const *argv[])
{
	std::deque<int> deque;
	std::vector<int> vector;
	
	if ( parseDeque( deque, argc, argv ) == false )
		return ( 1 );
	if ( parseVector( vector, argc, argv ) == false )
		return ( 1 );
	
	printResultDeque( deque, argc );
	printResultVector( vector, argc );

	return 0;
}
