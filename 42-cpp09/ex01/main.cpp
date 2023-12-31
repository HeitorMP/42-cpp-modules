/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:09:13 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/16 16:30:43 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char const *argv[])
	{
	if ( argc != 2 )
	{
		std::cerr << "Invalid params!" << std::endl;
		return ( 1 );
	}
	std::string input( argv[1] );
	if ( input.find_first_not_of( "0123456789+/-* " ) != std::string::npos )
	{
		std::cerr << "Invalid operator!" << std::endl;
		return ( 1 );
	}

	if ( rpn( input ) == false )
	{
		std::cerr << "Invalid argument!" << std::endl;
	}
	return 0;
}
