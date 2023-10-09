/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:05:15 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/10/09 16:48:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int ft_replace(int argc, char const *argv[]) {
    std::ifstream src_file;
    std::ofstream dest_file;
    std::string fileName, fullStr;
    std::stringstream full;

    if (argc != 4 || argv[2][0] == '\0' )
    {
        std::cerr << "Wrong params..." << std::endl;
        std::cerr << "usage: ./rep filename s1 s2" << std::endl;
        return (1);
    }

    fileName = argv[1];
    src_file.open(fileName.c_str(), std::ios::in);
	if (!src_file) {
		std::cerr << "No such file" << std::endl;
        return (2);
    }
    fileName = argv[1];
    full << src_file.rdbuf();      // read all file to string stream
    fullStr = full.str();         // now convert to string to use the <string> methods

    size_t begin = 0;
    size_t occurence = 0;
    begin = fullStr.find(argv[2]);
    while (1) {
        if ( begin != std::string::npos) {
            fullStr.erase(begin, strlen(argv[2]));  // delete the occurrence.
            fullStr.insert(begin, argv[3]);        // and insert the s2 from the begining.
            occurence++;                          // accumulator for testing purposes.
            begin = fullStr.find(argv[2]);       // check for the next occurrence, from the begining, TODO: find a way to continue from the last checker pos.
        }
        else {
            break ;
        }
    }
    fileName += ".replace";
    dest_file.open(fileName.c_str(), std::ios::out);
    if (!dest_file) {
		std::cerr << "Can't create file, check permissions!" << std::endl;
        return (3);
    }

    dest_file << fullStr;
    dest_file.close();
    src_file.close();
    return (occurence);
}