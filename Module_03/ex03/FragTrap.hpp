/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:36:46 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 21:08:32 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap //Virtual para que no se creen dos claptrap desde diamond!
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();

		FragTrap &operator=(const FragTrap &other);

		void	attack(std::string const & target);
		void	highFivesGuys(void); 
};

std::ostream	&operator<<(std::ostream &out, const FragTrap &scavtrap);

#endif