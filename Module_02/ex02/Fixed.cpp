/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:45:30 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/25 16:18:35 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->n_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << this->n_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits (int const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << this->n_bits);
}

int		Fixed::toInt(void) const
{
	return value >> n_bits;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
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

Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed val;
	val = this->toFloat() * other.toFloat();
	return val;
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed val;
	val = this->toFloat() / other.toFloat();
	return val;
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}