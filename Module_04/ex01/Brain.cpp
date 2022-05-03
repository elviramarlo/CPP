/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:11:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 19:12:30 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	ideas[0] = "Eat";
	ideas[1] = "Drink";
	ideas[2] = "Sleep";
}

Brain::Brain(Brain const &other)
{
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
	for (int i = 0; i < ideas->length(); i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < ideas->length(); i++)
	{
		std::cout << i + 1 << ". " << ideas[i] << std::endl;
	}
}