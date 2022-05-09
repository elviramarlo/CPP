/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:56:31 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 20:40:27 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	
	void	attack();
};



#endif