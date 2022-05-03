/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:17:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 19:37:23 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const &other)
{
	this->type = other.type;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Guau!!" << std::endl;
}

void	Dog::think() const
{
	brain->printIdeas();
}