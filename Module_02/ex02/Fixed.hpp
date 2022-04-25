/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:41:14 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/25 16:02:43 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int					value;
		static const int	n_bits = 8;

	public:
		Fixed(void);							//Constructor
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);				//Copy constructor
		~Fixed(void);							//Destructor
		Fixed	&operator=(const Fixed &other);	//Assignation operator

		// Comparison operators:
		bool	operator<(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		// Arithmetic operators:
/* 		Fixed	operator+(const Fixed &fixed1, const Fixed &fixed2);
		Fixed	operator-(const Fixed &fixed1, const Fixed &fixed2); */
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);

		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif