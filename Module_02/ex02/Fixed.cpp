/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:01:50 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/18 01:40:01 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed(void): value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = num << this->n_bits;
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << this->n_bits));
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Destructor
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

// Operators
Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return *this;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->value < other.value;
}

bool	Fixed::operator>(const Fixed &other) const
{
	return this->value > other.value;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->value <= other.value;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->value >= other.value;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->value == other.value;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->value != other.value;
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed aux;
	aux = this->toFloat() + other.toFloat();
	return aux;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed aux;
	aux = this->toFloat() - other.toFloat();
	return aux;
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed aux;
	aux = this->toFloat() * other.toFloat();
	return aux;
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed aux;
	aux = this->toFloat() / other.toFloat();
	return aux;
}

Fixed	Fixed::operator++(void) //Add 0.00000001 (the min that can be added greater than 0)
{
	value++;
	return *this;
}

Fixed	Fixed::operator++(int num)
{
	Fixed aux(*this);

	this->value++;
	return aux;
}

Fixed	Fixed::operator--(void) // --i
{
	value--;
	return *this;
}

Fixed	Fixed::operator--(int num) // i--
{
	Fixed aux(*this);

	this->value--;
	return aux;
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return fixed1 > fixed2 ? fixed1 : fixed2;
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return fixed1 < fixed2 ? fixed1 : fixed2;
}

const Fixed	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	return fixed1 > fixed2 ? fixed1 : fixed2;
}

const Fixed	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	return fixed1 < fixed2 ? fixed1 : fixed2;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

// Functions
int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (1 << this->n_bits);
}

int		Fixed::toInt(void) const
{
	return value >> n_bits;
}

