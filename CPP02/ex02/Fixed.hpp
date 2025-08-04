/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:25:52 by arforouz          #+#    #+#             */
/*   Updated: 2025/08/04 13:06:26 by marvin           ###   ########.fr       */
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

        // Comparison operators
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        // Arithmetic operators
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // Increment/Decrement operators (prefix and postfix)
        Fixed &operator++(); 
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        // Static min
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);

        // Static max
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed_obj);

#endif