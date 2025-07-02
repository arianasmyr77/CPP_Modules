/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:41:35 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/02 15:41:35 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip> // for std::setw

void    Contact::fillContact()
{
    std::cout << "First Name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    std::cout << "NickName: ";
    std::getline(std::cin, nickName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
}

void    Contact::showContact() const
{
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Nick Name: " << nickName << "\n";
    std::cout << "Phone Number: " << phoneNumber << "\n";
    std::cout << "Darkest Secret: " << darkestSecret << "\n";
};

static void printField(const std::string& str)
{
    if (str.length() < 10)
        std::cout << str.substr(0, 9) + ".";
    else
        std::cout << std::setw(10) << str;
}

void Contact::showSummary(int index) const
{
	std::cout << std::setw(10) << index << "|";
	printField(firstName); std::cout << "|";
	printField(lastName); std::cout << "|";
	printField(nickName); std::cout << "\n";
}