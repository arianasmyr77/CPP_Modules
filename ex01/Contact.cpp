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

bool isOnlySpace(const std::string& str)
{
    for(std::size_t i = 0; i < str.length(); ++i)
    {
        if(!std::isspace(str[i]))
            return false;
    }
    return true;
}

bool isValidNumber(const std::string& str) {
    for (std::size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (std::isalpha(static_cast<unsigned char>(c))) {
            return false;
        }
        if (!std::isdigit(static_cast<unsigned char>(c)) &&
            c != '+' && c != '-' && c != '(' && c != ')' &&
            c != '*' && c != '#' && c != ' ') {
            return false;
        }
    }
    return true;
}

void    Contact::fillContact()
{
    do{
        std::cout << "Please enter First Name: ";
        std::getline(std::cin, this->firstName);
        if(this->firstName.empty() || isOnlySpace(this->firstName))
            std::cout << "Field is empty. Please enter a value." << std::endl;
    } while (this->firstName.empty() || isOnlySpace(this->firstName));
    do{
        std::cout << "Please enter Last Name: ";
        std::getline(std::cin, this->lastName);
        if(this->lastName.empty() || isOnlySpace(this->lastName))
            std::cout << "Field is empty. Please enter a value." << std::endl;
    } while (this->lastName.empty() || isOnlySpace(this->lastName));
    do
    {
        std::cout << "Please enter NickName: ";
        std::getline(std::cin, this->nickName);
        if(this->nickName.empty() || isOnlySpace(this->nickName))
            std::cout << "Field is empty. Please enter a value." << std::endl;
    } while (this->nickName.empty() || isOnlySpace(this->nickName));
    do
    {
        std::cout << "Please enter Phone Number: ";
        std::getline(std::cin, this->phoneNumber);
        if(this->phoneNumber.empty() || isOnlySpace(this->phoneNumber))
            std::cout << "Field can't be empty. Please enter a value." << std::endl;
        else if(!isValidNumber(this->phoneNumber)){
            std::cout << "It should be a number " << std::endl;
        }
    } while (this->phoneNumber.empty() || isOnlySpace(this->phoneNumber) || 
    !isValidNumber(this->phoneNumber));
    do
    {
        std::cout << "Please enter Darkest Secret: ";
        std::getline(std::cin, this->darkestSecret);
        if(this->darkestSecret.empty() || isOnlySpace(this->darkestSecret))
            std::cout << "Field can't be empty. Please enter a value.\n";
    } while (this->darkestSecret.empty() || isOnlySpace(this->darkestSecret));
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
	std::cout << "|" << std::setw(9) << index << "|";
	printField(firstName); std::cout << "|";
	printField(lastName); std::cout << "|";
	printField(nickName); std::cout << "|" << std::endl;
}