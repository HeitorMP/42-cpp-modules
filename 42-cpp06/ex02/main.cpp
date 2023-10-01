/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:13:45 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/01 11:45:09 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	Base *teste = generate();
	std::cout << teste << std::endl;

	identify( teste );
	return 0;
}
