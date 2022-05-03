/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:28:03 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 21:14:37 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type): type(type) {}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &other)
{
	this->type = other.type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target) {}
