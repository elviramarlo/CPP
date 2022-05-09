/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:05:22 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 21:04:58 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string type)
	{
		this->type = type;
	}
	
	Weapon::~Weapon(){}

	void Weapon::setType(std::string type)
	{
		this->type = type;
	}
	
	std::string const& Weapon::getType()
	{
		return type;
	}