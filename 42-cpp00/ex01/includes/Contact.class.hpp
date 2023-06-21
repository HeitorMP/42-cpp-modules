/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:36:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/16 10:49:36 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkSecret;
    
public:
    Contact();
    bool setContact(std::string fName, std::string lName, std::string nName, std::string phone, std::string dsecret);
    bool createContact();
    void showContact(int index) const;
    void showFormatedContact(int index) const;
    ~Contact();
};

#endif