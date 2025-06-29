/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <aroforuz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:19:02 by arforouz          #+#    #+#             */
/*   Updated: 2025/04/26 12:19:02 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#include <iostream>
#include <cctype>

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
<<<<<<< HEAD
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);//we cast it to char because toupper return an int
        std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
=======
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while()
    }

}
>>>>>>> 77e3e90809b8a4470e214e16912c989dace4c9e1
