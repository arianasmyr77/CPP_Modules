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
    std::cout << "Please enter First Name: ";
    std::getline(std::cin, firstName);
    std::cout << "Please enter Last Name: ";
    std::getline(std::cin, lastName);
    std::cout << "Please enter NickName: ";
    std::getline(std::cin, nickName);
    std::cout << "Please enter Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Please enter Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
}

void    Contact::showContact() const
{
    std::cout << "First Name\t:" << firstName << std::endl;
    std::cout << "Last Name\t:" << lastName << std::endl;
    std::cout << "Nickname\t:" << nickName << std::endl;
    std::cout << "Phone Number\t:" << phoneNumber << std::endl;
    std::cout << "Darkest Secret\t:" << darkestSecret << std::endl;
};

static void printField(const std::string& str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) + ".";
    else
        std::cout << std::setw(10) << str;
}

void Contact::showSummary(int index) const
{
	std::cout << std::setw(10) << index << "|";
	printField(firstName); std::cout << "|";
	printField(lastName); std::cout << "|";
	printField(nickName); std::cout << "|" << std::endl;
}