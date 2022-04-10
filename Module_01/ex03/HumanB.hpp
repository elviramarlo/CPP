/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:19:41 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/10 19:42:51 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
	
public:
	HumanB(std::string name);
	~HumanB();
	
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif