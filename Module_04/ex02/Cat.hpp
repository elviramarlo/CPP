/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:46:57 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 18:58:15 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat &operator=(Cat const &other);

		virtual void	makeSound() const;
		void	think() const;
};

