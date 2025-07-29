/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:26:18 by arforouz          #+#    #+#             */
/*   Updated: 2025/07/29 19:29:04 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXEDD_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype> 

Class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed(void); 
};


#endif