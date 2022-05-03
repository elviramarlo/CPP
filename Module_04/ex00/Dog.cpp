/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:17:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 16:33:43 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &other)
{
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Guau!!" << std::endl;
}