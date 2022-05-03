/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:01:14 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 16:43:57 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *m_sources[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};