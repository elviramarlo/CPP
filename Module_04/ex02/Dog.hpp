/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:16:42 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 18:59:14 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog &operator=(Dog const &other);

		void	makeSound() const;
		void	think() const;
};
