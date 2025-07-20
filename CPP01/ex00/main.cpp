/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:25:29 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/20 02:25:29 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("\033[33mbanished Banshee ");
	zombie->announce();
	randomChump("\033[38;5;208mmutated Foo\t");
	delete zombie;
	return 0;
}