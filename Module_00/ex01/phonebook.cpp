/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:23:08 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 14:00:26 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::add_contact()
{
	if (contact[i].create_contact())
	{
		if (i < 7)
			i++;
		else
			i = 0;
	}
}

void	Phonebook::search_contact()
{
	std::string	num_contact;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	for (int index = 1; index <= 8; index++)
	{
		std::cout << std::setw(10) << index << "|";
		contact[index - 1].show_contact();
	}
	std::cout << std::endl << std::endl << "Which contact do you want to see?: ";
	std::getline(std::cin, num_contact);
	std::cout << std::endl;
	if (is_num(num_contact, 1))
	{
		if (!num_contact[0] || stoi(num_contact) > 8)
			std::cout << "No contact with that index" << std::endl;
		else
			contact[stoi(num_contact) - 1].show_all_data();
	}
}
