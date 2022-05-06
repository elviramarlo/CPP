/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:34:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 22:06:36 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "---------- SHRUBBERY CREATION FORM ----------" << std::endl;
	try
	{
		ShrubberyCreationForm form1("home");
		Bureaucrat jim("jim", 10);
		jim.signForm(form1);
		jim.executeForm(form1);

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "--------------------" << std::endl;
	try
	{
		ShrubberyCreationForm form2("home");
		Bureaucrat jim("Jim", 138);
		jim.signForm(form2);
		jim.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---------- ROBOTOMY REQUESTS FORM ----------" << std::endl;
	try
	{
		RobotomyRequestForm robotomy("Carlos");
		Bureaucrat bur("María", 10);
		bur.signForm(robotomy);
		bur.executeForm(robotomy);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---------- PRESIDENTAL PARDON FORM ----------" << std::endl;
	try
	{
		PresidentialPardonForm form("Óscar");
		Bureaucrat bur("María", 10);
		bur.signForm(form);
		bur.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "--------------------" << std::endl;
	try
	{
		PresidentialPardonForm form("Óscar");
		Bureaucrat bur("María", 4);
		bur.signForm(form);
		bur.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}