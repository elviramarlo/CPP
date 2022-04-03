/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:13:37 by elvmarti          #+#    #+#             */
/*   Updated: 2022/03/31 20:54:07 by elvmarti         ###   ########.fr       */
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
	}
	return 0;
}
