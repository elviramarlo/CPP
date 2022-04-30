/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/30 21:15:40 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
		scav.guardGate();
	}
	std::cout << std::endl;
	{
		std::cout << "----- FRAG TRAP -----" << std::endl;
		FragTrap frag("María");
		std::cout << frag;
		frag.attack("Jose");
		frag.beRepaired(2);
		frag.highFivesGuys();
	}
	std::cout << std::endl;
	{
		std::cout << "----- DIAMOND TRAP -----" << std::endl;
		DiamondTrap diamond("Juana");
		std::cout << diamond;
		diamond.attack("Jose");
		diamond.beRepaired(2);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
	}
}