/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:05:22 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/10 20:54:19 by elvmarti         ###   ########.fr       */
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
		std::string const &typeREF = type;
		return (typeREF);
	}