/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:25:38 by arforouz          #+#    #+#             */
/*   Updated: 2025/08/02 23:28:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXEDD_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype> 
#include <cmath>

class Fixed
{
    private:
        int _val;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

        
        Fixed(const int num);
        Fixed(const float num);

        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed_obj);

#endif