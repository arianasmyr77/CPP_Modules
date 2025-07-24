/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:13:56 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/23 12:13:56 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :weapon(NULL), name(name)
{
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " doesn't have any weapon to attack with " << std::endl;
        
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}