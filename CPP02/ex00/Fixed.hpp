/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:26:18 by arforouz          #+#    #+#             */
/*   Updated: 2025/08/02 22:01:00 by marvin           ###   ########.fr       */
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
        int _val; //to store fixed point number value 
        static const int bits = 8; //the number of fractional bits
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif