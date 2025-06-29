/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:02:40 by arforouz          #+#    #+#             */
/*   Updated: 2025/05/09 18:54:09 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
/*
namespace   AriMath
{
    int add(int a, int b)
    {
        return a + b;
    }
}

// using namespace AriMath;

int main()
{
    std::cout << AriMath::add(3, 4) << std::endl;
    return (0);
}*/

//or

namespace   AriMath
{
    int add(int a, int b)
    {
        return a + b;
    }
}

using namespace AriMath;

int main()
{
    std::cout << add(3, 4) << std::endl;
    return (0);
}
