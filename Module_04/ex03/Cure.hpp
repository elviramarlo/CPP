/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:23:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 15:00:49 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &other);
		~Cure(void);

		Cure &operator=(Cure const &other);

		std::string const &	getType() const;
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

