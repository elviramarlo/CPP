/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:24:24 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/01 14:28:15 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::create_contact()
{
	std::cout << "Introduce first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Introduce last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Introduce nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Introduce number phone: ";
	std::getline(std::cin, phone);
	std::cout << "Introduce the darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

static void	print_info_contact(std::string info, int x)
{

	if (info.length() > 10)
		std::cout << info.substr(0, 9).append(".");
	else
		std::cout <<  std::setw(10) << info;
	if (x)
		std::cout << "|";
	else
		std::cout << std::endl;

}

void	Contact::show_contact()
{
	print_info_contact(first_name, 1);
	print_info_contact(last_name, 1);
	print_info_contact(nickname, 0);
}

void	Contact::show_all_data()
{
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
