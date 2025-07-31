/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:26:18 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/31 22:44:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXEDD_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype> 

class Fixed
{
    private:
        int _val;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other_fixed);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif