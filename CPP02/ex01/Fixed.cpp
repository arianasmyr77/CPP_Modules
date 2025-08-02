/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:25:35 by arforouz          #+#    #+#             */
/*   Updated: 2025/08/02 23:26:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_val = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_val = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_val = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_val;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_val = raw;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_val = roundf(num * (1 << bits));
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_val = roundf(num * (1 << bits));
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->_val) / (1 << bits);
}

int Fixed::toInt( void ) const
{
    return static_cast<int>(this->_val) / (1 << bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed_object)
{
	os << fixed_object.toFloat() << std::endl;
	return os;
}