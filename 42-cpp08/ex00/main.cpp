/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:30:14 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/04 13:56:39 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<int> teste;

	teste.push_back(1);
	teste.push_back(2);
	teste.push_back(3);
	teste.push_back(20);


	easyfind(teste, 20);

	return 0;
}
