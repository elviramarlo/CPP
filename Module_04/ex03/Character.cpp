/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:15:25 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 20:43:30 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("Luis")
{
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;	
}

Character::Character(std::string const &name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::Character(Character const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	std::cout << "Copy operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			this->m_inventory[i] = NULL;
			if (other.m_inventory[i])
				this->m_inventory[i] = other.m_inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			delete this->m_inventory[i];
	}
	std::cout << "Destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			std::cout << "Equip: " << m_inventory[i]->getType() << std::endl;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && m_inventory[idx])
	{
		std::cout << "Unequip: " << m_inventory[idx]->getType() << std::endl;
		m_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (m_inventory[idx])
		m_inventory[idx]->use(target);
	else
		std::cout << "No materia with that index" << std::endl;
}