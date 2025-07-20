/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:18:53 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/20 02:29:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype> // for std::isdigit std::isalpha
#include <iomanip>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie( std::string name);
        ~Zombie(void);
        void announce( void ); 
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif