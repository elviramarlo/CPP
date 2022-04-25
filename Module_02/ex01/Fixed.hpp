/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:41:14 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/25 22:39:38 by elvmarti         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &other);	//Assignation operator
		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif