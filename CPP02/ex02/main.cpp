/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:25:55 by arforouz          #+#    #+#             */
/*   Updated: 2025/08/07 18:14:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// int main() {
//     Fixed a(2.5f);     // Float constructor
//     Fixed b(1);        // Int constructor
//     Fixed c = b;       // Copy constructor
//     Fixed d;           // Default constructor

//     std::cout << "a = " << a;  // operator<<
//     std::cout << "b = " << b;
//     std::cout << "c = " << c;
//     std::cout << "d = " << d;

//     // Arithmetic operators
//     std::cout << "\n-- Arithmetic --\n";
//     Fixed sum = a + b;
//     Fixed diff = a - b;
//     Fixed prod = a * b;
//     Fixed div = a / b;

//     std::cout << "a + b = " << sum;
//     std::cout << "a - b = " << diff;
//     std::cout << "a * b = " << prod;
//     std::cout << "a / b = " << div;

//     // Comparison operators
//     std::cout << "\n-- Comparisons --\n";
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a >= b: " << (a >= b) << std::endl;
//     std::cout << "a <= b: " << (a <= b) << std::endl;
//     std::cout << "a == b: " << (a == b) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;

//     // Increment / Decrement
//     std::cout << "\n-- Increment / Decrement --\n";
//     Fixed x;
//     std::cout << "x = " << x;
//     std::cout << "++x = " << ++x;
//     std::cout << "x++ = " << x++;
//     std::cout << "x = " << x;
//     std::cout << "--x = " << --x;
//     std::cout << "x-- = " << x--;
//     std::cout << "x = " << x;

//     // Min / Max
//     std::cout << "\n-- Min / Max --\n";
//     std::cout << "Min(a, b) = " << Fixed::min(a, b);
//     std::cout << "Max(a, b) = " << Fixed::max(a, b);

//     return 0;
// }


// int main() {
//     Fixed a(5.5f);
//     Fixed b(2.3f);

//     // Variables no const: prueba versiones no const
//     Fixed &minRef = Fixed::min(a, b);
//     Fixed &maxRef = Fixed::max(a, b);

//     std::cout << "Min (non-const): " << minRef << std::endl;
//     std::cout << "Max (non-const): " << maxRef << std::endl;

//     // También se pueden modificar porque son referencias no const
//     minRef = Fixed(1.0f);
//     maxRef = Fixed(10.0f);

//     std::cout << "Modified minRef: " << minRef << std::endl;
//     std::cout << "Modified maxRef: " << maxRef << std::endl;

//     // Variables const: prueba versiones const
//     const Fixed c(10.1f);
//     const Fixed d(15.2f);

//     const Fixed &minConstRef = Fixed::min(c, d);
//     const Fixed &maxConstRef = Fixed::max(c, d);

//     std::cout << "Min (const): " << minConstRef << std::endl;
//     std::cout << "Max (const): " << maxConstRef << std::endl;

//    // minConstRef = Fixed(1.0f); //Eroor porq no se puede cambiar el const
//     //maxConstRef = Fixed(10.0f); //Error no se puede cambiar el valor de const =

//     return 0;
// }
