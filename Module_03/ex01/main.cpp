/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/30 21:24:41 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << "----- CLAP TRAP -----" << std::endl;
		ClapTrap clap("María");
		std::cout << clap;
		clap.attack("Jose");
		clap.beRepaired(2);
	}
	std::cout << std::endl;
	{
		std::cout << "----- SCAV TRAP -----" << std::endl;
		ScavTrap scav("Pepe");
		std::cout << scav;
		scav.attack("Jose");
		scav.beRepaired(2);
		scav.takeDamage(4);
		scav.guardGate();
	}
}