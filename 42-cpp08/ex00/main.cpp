/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:30:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/04 23:13:37 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main( void )
{
	std::vector<int> vec;

	vec.push_back(1); //0
	vec.push_back(2); //1
	vec.push_back(3); //2
	vec.push_back(20); //3

	std::cout << "Value 1 found at vector indice: " << easyfind(vec, 1) << std::endl;
	std::cout << "Value 2 found at vector indice: " << easyfind(vec, 2) << std::endl;
	std::cout << "Value 3 found at vector indice: " << easyfind(vec, 3) << std::endl;
	std::cout << "Value 20 found at vector indice: " << easyfind(vec, 20) << std::endl;
	std::cout << "Value not found returns : " << easyfind(vec, 40) << std::endl;

	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;

	std::deque<int> deq;
    deq.push_back(1); // 0 then 1 then 2
    deq.push_front(2); // 0 then 1
    deq.push_back(3); // 3
    deq.push_front(20); // 0

	std::cout << "Value 1 found at deque indice: " << easyfind(deq, 1) << std::endl;
	std::cout << "Value 2 found at deque indice: " << easyfind(deq, 2) << std::endl;
	std::cout << "Value 3 found at deque indice: " << easyfind(deq, 3) << std::endl;
	std::cout << "Value 20 found at deque indice: " << easyfind(deq, 20) << std::endl;
	std::cout << "Value not found returns : " << easyfind(deq, 40) << std::endl;

	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;

	std::list<int> lst;
	lst.push_back(1); // 0 then 1 then 2
    lst.push_front(2); // 0 then 1
    lst.push_back(3); // 3
    lst.push_front(20); // 0

	std::cout << "Value 1 found at deque indice: " << easyfind(lst, 1) << std::endl;
	std::cout << "Value 2 found at deque indice: " << easyfind(lst, 2) << std::endl;
	std::cout << "Value 3 found at deque indice: " << easyfind(lst, 3) << std::endl;
	std::cout << "Value 20 found at deque indice: " << easyfind(lst, 20) << std::endl;
	std::cout << "Value not found returns : " << easyfind(lst, 40) << std::endl;
	return 0;
}
