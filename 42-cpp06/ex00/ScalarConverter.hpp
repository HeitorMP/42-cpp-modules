/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:31:56 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 08:40:40 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &operator=( ScalarConverter const & rhs );

		static bool		startsWith( std::string const &src, std::string const &to_find );
		static bool		strHasAll( std::string const &src, std::string const &char_set );
		static size_t	ft_count_if( std::string const &src, char const &to_find );
		static bool		isSurroundByDigits( std::string const &src, char const &to_find );
		
		static bool		isOverload( std::string const &src, std::string const &type );

		static bool		isChar( std::string const &charCandidate );
		static bool		isInt( std::string const &intCandidate );
		static bool		isFloat( std::string const &floatCandidate );
		static bool		isDouble( std::string const &doubleCandidate );
		static bool		isPseudo( std::string const &pseudoCandidate );

		static void		convertChar( std::string const & src );
		static void		convertInt( std::string const & src );
		static void		convertFloat( std::string const & src );
		static void		convertDouble( std::string const & src );
		static void		convertPseudo( std::string const & src );

	public:
		static void		convert( std::string const & src );
};

#endif

