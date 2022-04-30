/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:05:52 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/27 16:58:00 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " has been created" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " has been detroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " <<
		attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " received " << amount << " points of damage!"
		<< std::endl;
	hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " has been repaired " << amount << 
		" hitpoints" << std::endl;
	hitpoints += amount;
}

std::string	ClapTrap::getName(void) const
{
	return this->name;
}

int	ClapTrap::getHitpoints(void) const
{
	return this->hitpoints;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->energy_points;
}

int	ClapTrap::getAttackDamage(void) const
{
	return this->attack_damage;
}

std::ostream	&operator<<(std::ostream &out, const ClapTrap &claptrap)
{
	std::cout << "---------------------------------" << std::endl <<
		"ClapTrap name: " << claptrap.getName() << std::endl <<
		"Hitpoints: " << claptrap.getHitpoints() << std::endl <<
		"Energy Points: " << claptrap.getEnergyPoints() << std::endl <<
		"Attack damage: " << claptrap.getAttackDamage() << std::endl <<
		"---------------------------------" << std::endl;
	return out;
}