/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:09:31 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 20:28:03 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria *m_inventory[4];
		std::string	name;

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &other);
		~Character();

		Character	&operator=(const Character &other);

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};