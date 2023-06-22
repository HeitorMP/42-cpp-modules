/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:09:20 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/18 19:20:43 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char const *argv[])
{

    int result = ft_replace(argc, argv);
    if (result < 0)
        return (1);


    std::string fileName, str1, str2;
    std::string cmd1, cmd2, cmd3;

    fileName = argv[1];
    str1 = argv[2];
    str2 = argv[3];

    cmd1 = "cat " + fileName + " | grep -o " + str1 + " | wc -l";
    cmd2 = "cat " + fileName + ".replace | grep -o " + str2 + " | wc -l";
    cmd3 = "cat " + fileName + ".replace | grep -o " + str1 + " | wc -l";
   /*  echo "String $2 in file $1: $result1"
    echo "String $3 in file $1.replace: $result2"
    echo "Total replacements: $output"
    echo "String $2 in file $1.replace: $result3" */
    std::cout << "String " << str1 << " in file " << fileName << ": " << std::flush;
    system(cmd1.c_str());
    std::cout << "Total replacements: " << result << std::endl;
    std::cout << "String " << str1 << " in file " << fileName + ".replace: "  << std::flush;
    system(cmd3.c_str());
    std::cout << "Total of string " << str2 << " in file " << fileName + ".replace: " << std::flush;
    system(cmd2.c_str());

    return (0);
}

