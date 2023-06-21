/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:10:23 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/16 22:59:32 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

std::string truncate_str(std::string str, size_t size, std::string end) {
    
    if (str.length() < size || end.length() > size)
        return (str);
    
    size_t newSize = size - end.length();
    std::string newstr(newSize, ' ');
    for (size_t i = 0; i < newSize; i++)
        newstr[i] = str[i];
    return (newstr + end);
}

void    wait_userinput(std::string message) {
    std::string input;
    std::cout << message << std::flush;
    getline(std::cin, input);
}
    