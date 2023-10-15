/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:36:30 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/15 09:41:34 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
# define HELPERS_HPP

# include <iostream>
# include <fstream>
# include <algorithm>
# include <string>
# include <map>
# include <cstdlib>
# include <bits/stdc++.h>

bool		isValidSha1sum();
std::string	trim( std::string str );
int			ft_count_if( std::string const &src, char const &to_find );
bool		isSurroundByDigits( std::string const &src, char const &to_find );
bool		isSmallMonth( int month );
bool		isLeapYear(int year);
bool		isValidDate( std::string dateCandidate );
bool		isValidValue( std::string valueCandidate );
bool		isValidLine( std::string lineCandidate );
bool		hasInputErrors( std::string line, std::string date, std::string value );

#endif