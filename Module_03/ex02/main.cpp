/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/30 21:25:33 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
		scav.takeDamage(5);
		scav.guardGate();
	}
	std::cout << std::endl;
	{
		std::cout << "----- FRAG TRAP -----" << std::endl;
		FragTrap frag("María");
		std::cout << frag;
		frag.attack("Jose");
		frag.beRepaired(2);
		frag.takeDamage(3);
		frag.highFivesGuys();
	}
}