/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:34:48 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 16:31:46 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("none")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
