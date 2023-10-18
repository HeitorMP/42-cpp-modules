/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:40:05 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/18 11:41:04 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <limits>
# include <deque>
# include <vector>
# include <iomanip>


/* Deque functions */
bool	isValidNumberDeque( std::string argument, std::deque<int> &deque );
bool	parseDeque( std::deque<int> &deque, int argc, char const *argv[] );
void	dequeInsert( std::deque<int> &sorted, int const &n );
void	dequeInsertionSort( std::deque<int> &deque );
void	mergeInsertionDequeSort( std::deque<int> &deque );
void	dequePrint( std::deque<int> &deque );
void	myMerge( std::deque<int> &left, std::deque<int> &right, std::deque<int> &deque );
/* Deque functions */
bool	isValidNumberVector( std::string argument, std::deque<int> &deque );
bool	parseVector( std::vector<int> &vector, int argc, char const *argv[] );
void	vectorInsert( std::vector<int> &sorted, int const &n );
void	vectorInsertionSort( std::vector<int> &vector );
void	mergeInsertionVectorSort( std::vector<int> &vector );
void	vectorPrint( std::vector<int> &vector );
void	myMerge( std::vector<int> &left, std::vector<int> &right, std::vector<int> &vector );

#endif