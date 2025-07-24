/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:52:26 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/24 13:52:26 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << ORANGE << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << RED << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	void (Harl::*functions[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int pos = 0;
	while (pos < 4 && levels[pos] != level)
		pos++;

	switch (pos)
	{
		case 0:
			(this->*functions[0])();
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 1:
			(this->*functions[1])();
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 2:
			(this->*functions[2])();
			(this->*functions[3])();
			break;
		case 3:
			(this->*functions[3])();
			break;
		default:
			std::cerr << "Error: There is no level with such a name" << std::endl;
	}
}

