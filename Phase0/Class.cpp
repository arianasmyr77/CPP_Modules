/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:38:57 by marvin            #+#    #+#             */
/*   Updated: 2025/07/13 11:38:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Class.hpp"

Class::Class (void)
{
    std::cout << "constructer called " << std::endl;
    return ;
}

void    Class::bar(void)
{
    std::cout << "Header function bar called " << std::endl;
    return ;
}

int main(){
    Class instance;

    instance.foo = 42;
    std::cout << "Instance.foo " << instance.foo << std::endl;

    instance.bar();

    return (0);
}