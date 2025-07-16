/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:43:04 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/02 16:43:04 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

class PhoneBook
{
private:
    Contact contacts[8];
    int contactCount;
    int oldestIndex;

public:
    PhoneBook();

    void addContact();
    void searchContacts() const;
};


#endif
