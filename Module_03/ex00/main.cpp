/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:15:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/27 17:04:32 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap first("Jose");
	ClapTrap second("María");

	first.attack(second.getName());
	first.takeDamage(8);
	first.beRepaired(5);
	//std::cout << first;
}