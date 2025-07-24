/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:13:52 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/23 12:13:52 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
    private:
        Weapon &weapon; //// Reference to Weapon (always exists)
        std::string name;
    public:
        void attack();
        void setWeapon(Weapon &weapon);
        HumanA(std::string name, Weapon &weapon);
};

#endif
