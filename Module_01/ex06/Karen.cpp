/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:21:25 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/19 15:53:10 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my"
	<< "XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl <<
	"I just love it!" << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl << 
	"I cannot believe adding extra bacon cost more money. You don’t put enough!"
	<< std::endl << "If you did I would not have to ask for it!" <<
	std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl <<
	"I think I deserve to have some extra bacon for free." << std::endl <<
	"I’ve been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl <<
	"This is unacceptable, I want to speak to the manager now." << std::endl
	<< std::endl;
}

void	Karen::complain(std::string level)
{
	int			i = 0;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

 	while (i < 4)
	{
		if (str[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0: debug();
		case 1: info();
		case 2: warning();
		case 3: error();
			break;
		case 4: std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
			break;
	}
}
