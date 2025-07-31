/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:18:41 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/20 02:18:41 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

// Zombie *newZombie(std::string name)
// {
//     Zombie *newZomb = new Zombie(name);
//     return (newZomb);
// }