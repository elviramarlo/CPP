/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:42:32 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 21:45:59 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target):
	AForm("PresidentialPardonForm", _target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other): AForm(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkGrades(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox"
		<< std::endl;
}
