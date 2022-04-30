/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:42:02 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/30 21:17:08 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"),
							FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")		
{
	std::cout << "DiamondTrap " << name << " has been created" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " has been detroyed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->ScavTrap::name = other.ClapTrap::name;
		this->FragTrap::hitpoints = other.getHitpoints();
		this->ScavTrap::energy_points = other.getEnergyPoints();
		this->FragTrap::attack_damage = other.getAttackDamage();
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am the DiamondTrap " << name << ". I am also " << ScavTrap::name
		<< std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamondtrap)
{
	std::cout << "---------------------------------" << std::endl <<
		"ClapTrap name: " << diamondtrap.getName() << std::endl <<
		"Hitpoints: " << diamondtrap.getHitpoints() << std::endl <<
		"Energy Points: " << diamondtrap.getEnergyPoints() << std::endl <<
		"Attack damage: " << diamondtrap.getAttackDamage() << std::endl <<
		"---------------------------------" << std::endl;
	return out;
}