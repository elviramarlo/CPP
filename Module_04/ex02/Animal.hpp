/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:31:41 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 19:55:15 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const &other);
		virtual ~Animal();
		Animal &operator=(Animal const &other);
		std::string	getType(void) const;
		virtual void	makeSound() const = 0;
};
