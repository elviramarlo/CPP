/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:28:03 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 20:31:54 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type): type(type) {}

AMateria::AMateria(AMateria const &other)
{
	std::cout << "AMATERIA Copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &other)
{
	std::cout << "AMATERIA Copy operator called" << std::endl;
	this->type = other.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target) {}
