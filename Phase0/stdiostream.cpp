/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdiostream.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:44:53 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 17:44:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    char buff[512];

    std::cout << "Hello World " << std::endl;

    std::cout << "Input a word : ";
    std::cin >> buff;
    std::cout << "You entered : [" << buff << "]" << std::endl;
    return (0);
}