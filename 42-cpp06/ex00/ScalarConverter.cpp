/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 10:31:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 09:05:30 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}
ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	*this = src;
	return ;
}
ScalarConverter::~ScalarConverter()
{
	return ;
}
ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs )
{
	if ( this != &rhs )
	{
		return ( *this );
	}
	return ( *this );
}

/**
 * @brief Check if a string starts with a specific substring.
 *
 * This function determines whether a given string starts with a specified substring.
 * It returns true if the source string begins with the provided substring; otherwise,
 * it returns false.
 *
 * @param src The source string to check for the starting substring.
 * @param to_find The substring to look for at the beginning of the source string.
 * @return True if the source string starts with the specified substring, false otherwise.
 */
bool	ScalarConverter::startsWith( std::string const &src, std::string const &to_find )
{
	return ( std::string::npos && src.rfind( to_find, 0 ) == 0 );
}

/**
 * @brief Check if a string contains all characters from a character set.
 *
 * This function determines whether a given string contains all the characters
 * from a specified character set. It returns true if all characters in the
 * character set are present in the source string; otherwise, it returns false.
 *
 * @param src The source string to check for character occurrences.
 * @param char_set The character set to compare against the source string.
 * @return True if all characters from the character set are found in the source string, false otherwise.
 */
bool	ScalarConverter::strHasAll( std::string const &src, std::string const &char_set )
{
	if ( char_set.size() < 1 || src.size() < 1 || src.size() < char_set.size() )
		return ( false );

	for ( int i = 0; i < (int)char_set.size(); i++ )
	{
		if (src.find( char_set[i] ) == std::string::npos )
			return ( false );
	}
	return ( true );
}

/**
 * @brief Count occurrences of a character in a string.
 *
 * This function iterates through a given string and counts how many times the
 * specified character appears in that string.
 *
 * @param src The string in which character occurrences will be counted.
 * @param to_find The character to be counted in `src`.
 * @return The number of occurrences of the character `to_find` in the string `src`.
 */
size_t	ScalarConverter::ft_count_if( std::string const &src, char const &to_find )
{
	int	count = 0;

	for ( int i = 0; i < (int)src.size(); i++ )
		if ( src[i] == to_find ) { count++; }

	return ( count );
}

/**
 * @brief Check if a character in a string is surrounded by digits.
 *
 * This function checks if a specific character in a given string is surrounded by
 * digits on both sides. It returns true if the character is flanked by digits;
 * otherwise, it returns false.
 *
 * @param src The source string in which to search for the character.
 * @param to_find The character to check for within the source string.
 * @return True if the character is surrounded by digits, false otherwise.
 */
bool	ScalarConverter::isSurroundByDigits( std::string const &src, char const &to_find )
{
	if ( src.find( to_find ) == std::string::npos )
		return ( false );

	int	pos = src.find( to_find );
	if ( std::isdigit( src[pos - 1] ) && std::isdigit( src[pos + 1] ) )
	{
		return ( true );
	}
	return ( false );
}

/**
 * @brief Check if a string representation of a number exceeds the specified type's limits.
 *
 * This function parses a string containing a number and checks if it exceeds the limits
 * of the specified type (CHAR, INT, FLOAT, or DOUBLE). It returns true if the parsed number
 * exceeds the type's limits; otherwise, it returns false. If the specified type is not found,
 * an error message is printed to the standard error stream.
 *
 * @param src The string containing the number to check.
 * @param type A string indicating the target type (CHAR, INT, FLOAT, or DOUBLE).
 * @return True if the parsed number exceeds the specified type's limits, false otherwise.
 */
bool	ScalarConverter::isOverload( std::string const &src, std::string const &type )
{
	long double	longNumber = strtold( src.c_str(), NULL );

	if ( type == "CHAR" )
	{
		char c = longNumber;
		return (c < 32 || c == 127);
	}
	else if ( type == "INT" )
		return (  longNumber < std::numeric_limits<int>::min() || longNumber > std::numeric_limits<int>::max() );
	else if ( type == "FLOAT" )
		return ( longNumber < -std::numeric_limits<float>::max() || longNumber > std::numeric_limits<float>::max() ); // lowest return = -max
	else if ( type == "DOUBLE" )
		return ( longNumber < -std::numeric_limits<double>::max() || longNumber > std::numeric_limits<double>::max() ); // lowest return = -max

	std::cerr << "err: overload function: type not found" << std::endl;
	return ( false );
}

bool	ScalarConverter::isChar( std::string const &charCandidate )
{
	return ( charCandidate.size() == 1 && !isdigit( charCandidate[0] ) );
}

bool	ScalarConverter::isInt( std::string const &intCandidate )
{
	if ( intCandidate.size() < 1 )
	{
		return ( false );
	}
	if ( intCandidate.find_first_not_of( "-0123456789" ) != std::string::npos )
	{
		return ( false );
	}
	if ( ft_count_if( intCandidate, '-') > 1 )
	{
		return ( false );
	}
	if ( ft_count_if( intCandidate, '-') == 1 && !startsWith( intCandidate, "-") )
	{
			return ( false );
	}
	return ( true );
}

bool	ScalarConverter::isFloat( std::string const &floatCandidate )
{
	if ( floatCandidate.find_first_not_of( "-.f0123456789" ) != std::string::npos )
	{   
		return ( false );
	}
	if ( ft_count_if(floatCandidate, '.') != 1 || ft_count_if(floatCandidate, '-') > 1 || ft_count_if(floatCandidate, 'f') > 1 )
	{
		return ( false );
	}
	if ( floatCandidate[floatCandidate.size() - 1] != 'f' )
	{
		return ( false );
	}
	if ( ft_count_if(floatCandidate, '-') ==  1 && !startsWith( floatCandidate, "-" ) )
	{
		return ( false );
	}
	if ( !isSurroundByDigits( floatCandidate, '.') )
	{
		return ( false );
	}
	return ( true );
}

bool	ScalarConverter::isDouble( std::string const &doubleCandidate )
{
	if ( doubleCandidate.find_first_not_of( "-.0123456789" ) != std::string::npos )
	{
		return ( false );
	}

	if ( ft_count_if(doubleCandidate, '.') != 1 || ft_count_if(doubleCandidate, '-') > 1 )
	{
		return ( false );
	}

	if ( ft_count_if(doubleCandidate, '-') ==  1 && !startsWith( doubleCandidate, "-" ) )
	{
		return ( false );
	}

	if ( !isSurroundByDigits( doubleCandidate, '.') )
	{
		return ( false );
	}
	return ( true );
}

bool	ScalarConverter::isPseudo( std::string const &pseudoCandidate )
{
	return ( pseudoCandidate == "-inf" || pseudoCandidate == "+inf" || pseudoCandidate == "nan"  || \
			pseudoCandidate == "-inff" || pseudoCandidate == "+inff" || pseudoCandidate == "nanf" );
}

void	ScalarConverter::convertChar( std::string const & src )
{
	char	c = src[0];
	int		i = static_cast<int>( c );
	float	f = static_cast<float>( c );
	double	d = static_cast<double>( c );

	if ( isOverload( src, "CHAR") )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << "float: " << std::setprecision(1) << f << "f" << std::endl;
	std::cout << std::fixed << "double: " << std::setprecision(1) << d << std::endl;
}

void	ScalarConverter::convertInt( std::string const & src )
{
	int		i = atoi( src.c_str() );
	char	c = static_cast<char>( i );
	float	f = static_cast<float>( i );
	double	d = static_cast<double>( i );

	if ( isOverload( src, "CHAR") )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if ( isOverload( src, "INT") )
		std::cout << "int: overload" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	if ( isOverload( src, "FLOAT") )
		std::cout << "float: overload" << std::endl;
	else
		std::cout << std::fixed << "float: " << std::setprecision(1) << f << "f" << std::endl;

	if ( isOverload( src, "DOUBLE") )
		std::cout << "double: overload" << std::endl;
	else
		std::cout << std::fixed << "double: " << std::setprecision(1) << d << std::endl;
}

void	ScalarConverter::convertFloat( std::string const & src )
{
	float	f = strtof( src.c_str(), NULL );
	char	c = static_cast<char>( f );
	int		i = static_cast<int>( f );
	double	d = static_cast<double>( f );

	if ( isOverload( src, "CHAR") || isPseudo( src ) )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if ( isOverload( src, "INT") || isPseudo( src ) )
		std::cout << "int: overload" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	if ( isOverload( src, "FLOAT") )
		std::cout << "float: overload" << std::endl;
	else
		std::cout << std::fixed << "float: " << std::setprecision(1) << f << "f" << std::endl;

	if ( isOverload( src, "DOUBLE") )
		std::cout << "double: overload" << std::endl;
	else
		std::cout << std::fixed << "double: " << std::setprecision(1) << d << std::endl;
}

void	ScalarConverter::convertDouble( std::string const & src )
{
	double	d = strtod( src.c_str(), NULL );
	char	c = static_cast<char>( d );
	int		i = static_cast<int>( d );
	float	f = static_cast<float>( d );

	if ( isOverload( src, "CHAR") )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if ( isOverload( src, "INT") )
		std::cout << "int: overload" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	if ( isOverload( src, "FLOAT") )
		std::cout << "float: overload" << std::endl;
	else
		std::cout << std::fixed << "float: " << std::setprecision(1) << f << "f" << std::endl;

	if ( isOverload( src, "DOUBLE") )
		std::cout << "double: overload" << std::endl;
	else
		std::cout << std::fixed << "double: " << std::setprecision(1) << d << std::endl;
}

void	ScalarConverter::convertPseudo( std::string const & src )
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	char sign = src[0];
	if ( src.find( "nan" ) != std::string::npos )
	{
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
	else
	{
		std::cout << "float: " << sign << "inff" << std::endl;
		std::cout << "double: " << sign << "inf" << std::endl;
	}
}

void	ScalarConverter::ScalarConverter::convert( std::string const & src )
{
	if ( isChar( src ) )
		convertChar( src );
	else if ( isInt( src ) )
		convertInt( src );
	else if ( isFloat( src ))
		convertFloat( src );
	else if ( isDouble( src ) )
		convertDouble( src );
	else if ( isPseudo( src ) )
		convertPseudo( src );
	else
		std::cout << "Unknown type" << std::endl;
}
