/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:08:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/16 23:32:54 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook {
private:
    Contact _contacts[8];

public:
    PhoneBook();
    bool addContact(int index);
    void searchDisplay() const;
    void displayContact(int index) const;
    ~PhoneBook();
};

#endif