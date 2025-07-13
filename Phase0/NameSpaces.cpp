/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NameSpaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:34:34 by marvin            #+#    #+#             */
/*   Updated: 2025/07/12 17:34:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace Perro {
    void hablar() {
        std::cout << "Hap Hap 🐶" << std::endl;
    }
}

namespace Gato {
    void hablar() {
        std::cout << "Miau Miau 🐱" << std::endl;
    }
}

int main()
{
    Perro::hablar();  // llama a la función hablar() dentro del namespace Perro
    Gato::hablar();   // llama a la función hablar() dentro del namespace Gato
    return 0;
}
