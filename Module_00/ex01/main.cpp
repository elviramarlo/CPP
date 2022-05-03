/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:13:37 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 14:07:44 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	std::string	arg;
	Phonebook	phone;

	while (1)
	{
		std::cout << std::endl << "Write ADD, SEARCH or EXIT: ";
		std::getline(std::cin, arg);
		std::cout << std::endl;
		if (arg == "EXIT")
			break;
		else if (arg == "ADD")
			phone.add_contact();
		else if (arg == "SEARCH")
			phone.search_contact();
		else
			std::cout << "Invalid command :(" << std::endl;
	}
	return 0;
}

bool	is_num(std::string num, int x)
{
	for (int i = 0; i < num.length(); i++)
	{
		if (!isdigit(num[i]))
		{
			if (x)
				std::cout << "Incorrect index!" << std::endl;
			return false;
		}
	}
	return true;
}
