/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PHONEBOOK.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:07:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/14 23:07:52 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "PhoneBook.class.hpp"
# include <iomanip>
# include <unistd.h>
# include <cstdio>
# include <cstdlib>

std::string truncate_str(std::string str, size_t size, std::string end);
void        wait_userinput(std::string message = "Press enter key to continue...");

#endif
