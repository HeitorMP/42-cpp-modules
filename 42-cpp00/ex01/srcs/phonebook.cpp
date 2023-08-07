/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:14:27 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/08/07 13:04:32 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

/* TODO */

void exitBook( std::string user ) {
    std::cout << "\033[2J\033[1;1H";
    std::cout << "\nbye "<< user << " and thanks for using amazing phonebook" << std::endl;
}

void getcommand(char *user)
{
    std::cout << "\033[2J\033[1;1H"; // \033[2J clear all screen | \033[1;1H pos the cursor at 1,1.
    std::string cmd;

    if (user) { 
        std::cout << std::endl << std::setw(10) << "Welcome " << user << 
                    " to the amazing PhoneBook" << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "| Commands |         Description           |" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "| * ADD    | save a new contact!           |" << std::endl;
    std::cout << "| * SEARCH | display a specific contact!   |" << std::endl;
    std::cout << "| * EXIT   | quit program!                 |" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}

int main(void)
{
    std::string command;
    PhoneBook   phonebook;
    int         index = 0;
    std::string toShow;
    char        *user;

    user = getlogin();
    do
    {
        getcommand(user);
        std::cout << "Choose a command: " << std::flush;
        getline(std::cin, command);
        if (command == "EXIT") {
            break ;
        }
        else if (command == "ADD") {
            if (phonebook.addContact(index)) {
                wait_userinput("Contact saved! Press enter key to continue...");
                 index++;
            } 
            else {
                wait_userinput("Contact was not created, check that all fields are filled.\nPress the enter key to continue...");
            }
            if (index > 7)
                index = 0;
        }
        else if (command == "SEARCH") {
            phonebook.searchDisplay();
            std::cout << "Choose contact by index: " << std::flush;
            getline(std::cin, toShow);
            while (atoi(toShow.c_str()) < 1 || atoi(toShow.c_str()) > 8)
            {
                std::cout << "Wrong index, try a number between 1 - 8: "; 
                getline(std::cin, toShow);
                if (std::cin.eof())
                    exitBook(user);
            }
            phonebook.displayContact(atoi(toShow.c_str()) - 1);
            wait_userinput();
        }
    } while (!std::cin.eof());
    exitBook(user);
    return (0);
}
