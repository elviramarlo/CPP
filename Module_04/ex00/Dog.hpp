/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:16:42 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 19:32:52 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog &operator=(Dog const &other);

		virtual void	makeSound() const;
};
