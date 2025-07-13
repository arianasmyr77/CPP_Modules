/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class00.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:45:27 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 20:45:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Perro{
public:
    std::string nombre;

    void bark(){
        std::cout << nombre << "calling : Hap Hap!" << std::endl;
    }
};

int main()
{
    Perro perro1; //instancia 1
    perro1.nombre = "Tut";

    Perro perro2; //instancia 2
    perro2.nombre = "Tylie";

    perro1.bark();
    perro2.bark();

    return (0);
}