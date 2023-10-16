/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:29:59 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/16 16:30:17 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	rpn( std::string input )
{
	std::stack<int>		stack;
	std::stringstream	expression( input );
	std::string			word;
	int					n1 = 0;
	int					n2 = 0;

	while (expression >> word) // Extract word from the stream.
	{
		if ( word.size() > 1 )
			return ( false );
		else
		{
			if ( word == "+" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 + n2 );
			}
			else if ( word == "-" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 - n2 );
			}
			else if ( word == "*" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 * n2 );
			}
			else if ( word == "/" )
			{
				n2 = stack.top();
				stack.pop();
				n1 = stack.top();
				stack.pop();
				stack.push( n1 / n2 );
			}
			else
				stack.push( word[0] - '0' );
		}
	}
	std::cout << stack.top() << std::endl;
	return ( true );
}