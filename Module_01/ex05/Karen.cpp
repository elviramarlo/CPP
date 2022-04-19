/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:48:51 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/19 15:13:11 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my" << 
	"XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl <<
	"I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. " <<
	"You don’t put enough!" << std::endl << "If you did I would not have to ask for it!" <<
	std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl <<
	"I’ve been coming here for years and you just started working here last month."
	<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." <<
	std::endl;
}

void	Karen::complain(std::string level)
{
	int			i;
	std::string	str[4];

	str[0] = "debug";
	str[1] = "info";
	str[2] = "warning";
	str[3] = "error";
	fPtr[0] = &Karen::debug;
	fPtr[1] = &Karen::info;
	fPtr[2] = &Karen::warning;
	fPtr[3] = &Karen::error;
	i = 0;
 	while (i < 4)
	{
		if (str[i] == level)
			(this->*fPtr[i])();
		i++;
	}
}
