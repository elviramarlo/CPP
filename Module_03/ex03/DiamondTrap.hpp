/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:33:07 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/30 21:30:30 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap();
		DiamondTrap &operator=(DiamondTrap const &other);

		void	attack(std::string const & target);
		void	whoAmI();
};

std::ostream	&operator<<(std::ostream &out, const DiamondTrap &diamondtrap);

#endif
