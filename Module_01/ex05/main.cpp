/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:54:51 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 21:40:17 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen karen;

	std::cout << std::endl << "DEBUG:" << std::endl;
	karen.complain("debug");
	std::cout << std::endl << "INFO:" << std::endl;
	karen.complain("info");
	std::cout << std::endl << "WARNING:" << std::endl;
	karen.complain("warning");
	std::cout << std::endl << "ERROR:" << std::endl;
	karen.complain("error");
	return 0;
}
