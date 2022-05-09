/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:06:18 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 21:20:09 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	static int i = 0;

	std::cout << name << ++i << " is dead." << std::endl;
}

void	Zombie::zombie_name(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	static int i = 0;
	std::cout << name << ++i << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
