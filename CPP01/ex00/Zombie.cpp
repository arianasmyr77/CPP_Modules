/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:32:45 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/20 01:32:45 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << "\033[0;31m: 🧟  destruction process completed 💀" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << "\033[32m: 🧟 BraiiiiiiinnnzzzZ..." << std::endl;
}