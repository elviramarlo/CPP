/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:13:14 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 19:58:43 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		m_sources[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			m_sources[i] = other.m_sources[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (m_sources[i])
			delete m_sources[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m_learn)
{
	int i = 0;

	while (i < 4)
	{
		if (!m_sources[i])
		{
			m_sources[i] = m_learn;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_sources[i] && m_sources[i]->getType() == type)
			return m_sources[i]->clone();
	}
	return NULL;
}