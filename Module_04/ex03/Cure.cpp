/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:45:55 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 16:51:07 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(Cure const &other)
{
	*this = other;
}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &other)
{
	this->type = other.type;
	return *this;
}

std::string const &Cure::getType() const
{
	return this->type;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}