/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:35:48 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/15 22:45:49 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int arg = 1; arg < argc; arg++)
    {
        for (int c = 0; (size_t)c < strlen(argv[arg]); c++)
        {
            std::cout << (char)toupper(argv[arg][c]) << std::flush;
        }
        // uncomment if spaces are neeed
        /*  if (arg < argc)
            std::cout << " " << std::flush;  */
    }
    std::cout << std::endl;
    return (0);
}
