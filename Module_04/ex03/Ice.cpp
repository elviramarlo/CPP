/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:57:53 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 16:50:54 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const &other)
{
	*this = other;
}

Ice::~Ice() {}

Ice &Ice::operator=(Ice const &other)
{
	this->type = other.type;
	return *this;
}

std::string const &Ice::getType() const
{
	return this->type;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}