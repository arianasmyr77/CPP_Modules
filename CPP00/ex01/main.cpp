/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:06:13 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/02 16:06:13 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phonebook;
    std::string command;
    std::cout << "\nWelcome to the 80s Phonebook" << std::endl;
    while (true)
    {;
        std::cout << "Please choose an option :" << std::endl;
        std::cout << "ADD / SEARCH / EXIT" << std::endl;
        std::getline(std::cin, command);

        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContacts();
        else if (command == "EXIT")
        {
            std::cout << "See you soon. " << std::endl;
            break ;
        }
        else
            std::cout << "Unknown command. Try ADD, SEARCH or EXIT. \n";
    }
    return (0);
}