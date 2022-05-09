/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:00:49 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 20:40:22 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA()
{
	std::cout << name << ": \"I'm dying...\"" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks whith this " << weapon.getType() << std::endl;
}