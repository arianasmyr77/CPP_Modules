/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:08:14 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/21 14:08:14 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout <<  RED << this->name << " 🧟 : destroyed 💀" << RESET << std::endl;
}

void Zombie::announce()
{
    std::cout << GREEN << this->name << "\033[33m 🧟 : BraiiiiiiinnnzzzZ..." 
    << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}