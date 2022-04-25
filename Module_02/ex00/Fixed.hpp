/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:41:14 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/24 21:00:56 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	n_bits = 8;

	public:
		Fixed(void); //Constructor
		Fixed(const Fixed &other); //Copy constructor
		~Fixed(void); //Destructor
		Fixed &operator=(const Fixed &other); //Assignation operator
		int		getRawBits(void) const;
		void	setRawBits (int const raw);
};

#endif