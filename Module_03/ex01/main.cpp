/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/27 18:26:02 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap first("Jose");
	ClapTrap second("María");

	first.attack(second.getName());
	first.takeDamage(8);
	first.beRepaired(5);
	first.guardGate();
	//std::cout << first;
}