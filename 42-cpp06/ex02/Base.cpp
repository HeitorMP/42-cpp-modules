/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:02:33 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 11:46:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	return ;
}

/* It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation. */
Base * generate(void)
{
	srand( time( NULL ) );
	// to test wrong types
	int random = ( rand() % 10 ) ;
	//int random = ( rand() % 3 );

	switch ( random )
	{
	case 0:
		std::cout << "New A" << std::endl;
		return ( new A() );
		break;
	case 1:
		std::cout << "New B" << std::endl;
		return ( new B() );
		break;
	case 2:
		std::cout << "New C" << std::endl;
		return ( new C() );
		break;
	default:
		return ( NULL );
		break;
	}
}

/*https://stackoverflow.com/questions/351845/finding-the-type-of-an-object-in-c
TYPE& dynamic_cast<TYPE&> (object);
TYPE* dynamic_cast<TYPE*> (object);
*/
void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type of object: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type of object: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type of object: C" << std::endl;
	else
		std::cout << "Type of object: unknown" << std::endl;
}

// void	identify( Base& p )
// {
// 	;
// }