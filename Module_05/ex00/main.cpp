/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:34:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 15:18:04 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat bur("Pepe", 50);
		std::cout << bur;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	try
	{
		Bureaucrat bur("Julia", 150);
		std::cout << bur;
		bur.decrementGrade();
		std::cout << bur;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	try
	{
		Bureaucrat bur("María", 0);
		std::cout << bur;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	try
	{
		Bureaucrat bur("Iván", 145);
		for (int i = 0; i < 10; i++)
		{
			std::cout << bur;
			bur.decrementGrade();
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}