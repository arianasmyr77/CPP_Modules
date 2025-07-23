/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:08:03 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 14:08:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int zombies_num = 5;
    Zombie *horde = zombieHorde(zombies_num, "BHRED");
    for (int i = 0; i < zombies_num; i++)
            horde[i].announce();
    delete[] horde;
    return (0);
}