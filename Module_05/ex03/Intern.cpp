/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:51 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/06 15:34:16 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

Intern::~Intern() {}

AForm*	Intern::makeForm(std::string form_name, std::string target)
{
	std::string	what_form[3];
	int			i = 0;

	what_form[0] = "ShrubberyCreation";
	what_form[1] = "RobotomyRequest";
	what_form[2] = "PresidentialPardon";
	while(i < 3)
	{
		if (what_form[i] == form_name)
			break ;
		i++;
	}
	switch (i)
	{
		case 0: std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
				return new ShrubberyCreationForm(target);
			break;
		case 1: std::cout << "Intern creates RobotomyRequestForm" << std::endl;
				return new RobotomyRequestForm(target);
			break;
		case 2: std::cout << "Intern creates PresidentialPardonForm" << std::endl;
				return new PresidentialPardonForm(target);
			break;
		default: throw Intern::NotFormException();
				return NULL;
			break;
	}
}

const char* Intern::NotFormException::what() const throw()
{
	return ("The form does not exist");
}