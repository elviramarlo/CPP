/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:43:06 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 21:17:43 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int		num_zombies;
	Zombie	*zombies;

	if (argc == 2)
	{
		num_zombies = atoi(argv[1]);
		zombies = zombieHorde(num_zombies, "Zombie");
		for (int i = 0; i < num_zombies; i++)
			zombies[i].announce();
		delete [] zombies;
	}
	else
		std::cout << std::endl << "Only one number is needed." << std::endl;
	return 0;
}