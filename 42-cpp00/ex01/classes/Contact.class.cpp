/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:05:28 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/16 23:32:29 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Contact::Contact() {
    ;
}

bool Contact::setContact(std::string fname, std::string lname, std::string nname, std::string phone, std::string dsecret) {
    if (fname.length() == 0 || lname.length() == 0 || nname.length() == 0  \
        || phone.length() == 0 || dsecret.length() == 0 ) {
        return (false);
    }
    this->_firstName = fname;
    this->_lastName = lname;
    this->_nickName = nname;
    this->_phoneNumber = phone;
    this->_darkSecret = dsecret;
    return (true);
}

bool Contact::createContact() {
    std::string fname;
    std::string lname;
    std::string nname;
    std::string phone;
    std::string dsecret;
    
    std::cout << "Enter the first name: " << std::flush;;
    getline(std::cin, fname);
    std::cout << "Enter the last name: " << std::flush;;
    getline(std::cin, lname);
    std::cout << "Enter the nickname: " << std::flush;;
    getline(std::cin, nname);
    std::cout << "Enter the phone: " << std::flush;;
    getline(std::cin, phone);
    std::cout << "💀 Darkest Secret 💀: " << std::flush;
    getline(std::cin, dsecret);
    return (setContact(fname, lname, nname, phone, dsecret));
}

void Contact::showContact(int index) const {
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "index: " << index + 1 << std::endl;
    std::cout << "First name: " << this->_firstName << std::endl;
    std::cout << "Last name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickName << std::endl;
    std::cout << "Number: " << this->_phoneNumber << std::endl;
    std::cout << "💀 Darkest Secret 💀: " << this->_darkSecret << std::endl;
}

void Contact::showFormatedContact(int index) const {

    std::cout << std::setw(10) << index + 1 << std::flush;
    std::cout << "|" << std::flush;
    std::cout << std::setw(10) << truncate_str(this->_firstName, 10, ".") << std::flush;
    std::cout << "|" << std::flush;
    std::cout << std::setw(10) << truncate_str(this->_lastName, 10, ".") << std::flush;
    std::cout << "|" << std::flush;
    std::cout << std::setw(10) << truncate_str(this->_nickName, 10, ".") << std::flush;
    std::cout << "|" << std::endl;
}

Contact::~Contact() {
    ;
}