/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:06:13 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/02 16:06:13 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main()
{
    Contact c;
    c.fillContact();
    std::cout << "\nContact summary:\n";
    c.showSummary(0);
    std::cout << "\nFull Contact Info:\n";
    c.showContact();
    return (0);
}