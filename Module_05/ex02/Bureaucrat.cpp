/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:43:56 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/06 14:31:19 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &_name, int _grade): name(_name), grade(_grade)
{
	if (_grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()
	<< std::endl;
	return out;
}

void	Bureaucrat::incrementGrade()
{
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

bool		Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
		return true;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign "  << form.getName() <<
			". The grade is too low! :(" << std::endl;
	}
	return false;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high, the maximum is 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low, the minimum is 150");
}