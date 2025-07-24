/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:13:47 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/23 12:13:47 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacjs with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}