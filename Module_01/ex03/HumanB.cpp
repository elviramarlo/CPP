/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:26:51 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 20:22:19 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << name <<  ": \"I'm dying...\"" << std::endl;
}

void HumanB::attack()
{
	if (weapon == NULL)
		std::cout << name << " attacks whith his own hands" << std::endl;
	else
		std::cout << name << " attacks whith this " << weapon->getType()
		<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}