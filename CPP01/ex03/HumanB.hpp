/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:13:59 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/23 12:13:59 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
    private:
        Weapon *weapon; // Pointer to Weapon (can be null)
        std::string name;
    public:
        void attack();
        void setWeapon(Weapon *weapon);
        HumanB(std::string name);
};

#endif