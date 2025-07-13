/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdiostream01.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:02:11 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 20:02:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// int main()
// {
//     int age;
//     std::cout << "cuantos años tiene?";
//     std::cin >> age;
//     std::cout << "Tienes " << age << "años" << std::endl;
//     return 0;

// }

int main()
{
    std::string nombre;
    int edad;

    std::cout << "Ingresa tu nombre: ";
    std::cin >> nombre;

    std::cout << "Ingresa tu edad:";
    std::cin >> edad;

    if (edad < 0)
    {
        std::cerr << "Error: Enter a humankind age please. No - value" << std::endl;
        return 1;
    }
    std::cout << "Hola " << nombre << " tienes " << edad << " años." << std::endl;
    return (0);
}