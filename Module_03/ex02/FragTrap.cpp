/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:10:00 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/27 22:18:02 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " has been created" << std::endl;
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been detroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << name << " attack " << target << ", causing " <<
		attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " wants to high five!" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const FragTrap &fragtrap)
{
	std::cout << "---------------------------------" << std::endl <<
		"FragTrap name: " << fragtrap.getName() << std::endl <<
		"Hitpoints: " << fragtrap.getHitpoints() << std::endl <<
		"Energy Points: " << fragtrap.getEnergyPoints() << std::endl <<
		"Attack damage: " << fragtrap.getAttackDamage() << std::endl <<
		"---------------------------------" << std::endl;
	return out;
}