/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:36:52 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/02 16:36:52 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contactCount = 0;
    oldestIndex = 0;
}

void PhoneBook::addContact()
{
    contacts[oldestIndex].fillContact();
    oldestIndex = (oldestIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts() const
{
    if (contactCount == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return ;
    }
    std::cout << "************ PHONEBOOK CONTACTS ************" << std::endl;
    std::cout   << "|"<< std::setw(9) << "Index" << "|"
                << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|"
                << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < contactCount; i++)
    {
        contacts[i].showSummary(i);
    }

    std::cout << "Enter the indx of contact you wish to view: ";
    std::string input;
    std::getline(std::cin, input);

    if (input.length() != 1 || input[0] <'0' || input[0] > '7')
    {
        std::cout << "Invalid Index. Please Enter a value between 0-7" << std::endl;
        return ;
    }

    int index = input[0] - '0';
    if (index >= contactCount)
    {
        std::cout << "No contact with that id in the phonebook." << std::endl;
        return ;
    }

    contacts[index].showContact();
}
