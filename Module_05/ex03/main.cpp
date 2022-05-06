/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:34:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/06 15:36:02 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	std::cout << std::endl << "---------- FORM CREATION ----------" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat *bur = new Bureaucrat("Jim", 5);
		rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
		bur->signForm(*rrf);
		bur->executeForm(*rrf);
		delete rrf;
		delete bur;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "--------------------" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreatio", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}