/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:22:00 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 22:07:13 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target):
	AForm("RobotomyRequestForm", _target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other): AForm(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checkGrades(executor);
	srand (time(NULL));
	int random = rand() % 3;

	if (random == 1)
		std::cout << "Bzzzpzzpp, bzzrrp... " << this->getTarget() << 
		" has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy has been a failure u_u" << std::endl;
}