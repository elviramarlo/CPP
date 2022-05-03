/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:47:59 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 16:33:43 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meoooww" << std::endl;
}