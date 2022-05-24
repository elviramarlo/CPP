/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 15:18:38 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/17 17:05:08 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		std::cout << "-- ALLOCATED ON THE HEAP --" << std::endl;
		for (int i = 1; i < argc; i ++)
		{
			Zombie *zombie = newZombie(argv[i]);
			zombie->announce();
			delete zombie;
		}
		std::cout << std::endl << " -- ALLOCATED ON THE STACK --" << std::endl;
		for (int i = 1; i < argc; i ++)
			randomChump(argv[i]);
	}
	else
		std::cout << "One name (or more) is needed." << std::endl;
	return 0;
}
