/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:14:10 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/23 12:14:10 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string new_value)
{
    this->type = new_value;
}