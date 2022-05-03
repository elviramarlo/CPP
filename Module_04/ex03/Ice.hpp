/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:58:26 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 15:04:12 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &other);
		~Ice(void);

		Ice &operator=(Ice const &other);

		std::string const & getType() const;
		AMateria* clone() const;
		void	use(ICharacter& target);
};
