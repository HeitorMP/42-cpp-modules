/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:11:58 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/16 23:32:30 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() {
    return ;
}

bool PhoneBook::addContact(int index) {
    return (this->_contacts[index].createContact());
}

void PhoneBook::searchDisplay() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "F. Name" << "|" 
              << std::setw(10) << "L. Name" << "|"
              << std::setw(10) << "Nickname" << "|" 
              << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
        this->_contacts[i].showFormatedContact(i);
}

void PhoneBook::displayContact(int index) const {
    this->_contacts[index].showContact(index);
}

PhoneBook::~PhoneBook() {
    return ;
}