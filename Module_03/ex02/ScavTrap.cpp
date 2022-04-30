/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:01:16 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/27 18:26:24 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) // !!!
{
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->attack_damage = other.attack_damage;
		this->energy_points = other.energy_points;
		this->hitpoints = other.hitpoints;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " <<
		attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " has been entered in gate keeper mode"
	<< std::endl;
}

std::ostream	&operator<<(std::ostream &out, const ScavTrap &scavtrap)
{
	std::cout << "---------------------------------" << std::endl <<
		"ScavTrap name: " << scavtrap.getName() << std::endl <<
		"Hitpoints: " << scavtrap.getHitpoints() << std::endl <<
		"Energy Points: " << scavtrap.getEnergyPoints() << std::endl <<
		"Attack damage: " << scavtrap.getAttackDamage() << std::endl <<
		"---------------------------------" << std::endl;
	return out;
}
