/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:47:59 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 17:34:40 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat const &other)
{
	this->type = other.type;
	this->brain = new Brain;
	*(this->brain) = *(other.brain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meoooww" << std::endl;
}

void	Cat::think() const
{
	brain->printIdeas();
}