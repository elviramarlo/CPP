/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:33:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 17:12:39 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(const std::string _name, const std::string _target, const int _sig_grade,
			 const int _exec_grade): name(_name), exec_grade(_exec_grade), sig_grade(_sig_grade),
			target(_target)
{
	this->is_signed = false;
	if (this->exec_grade < 1 || this->sig_grade < 1)
		throw AForm::GradeTooHighException();
	if (this->exec_grade > 150 || this->sig_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &other): name(other.name), sig_grade(other.sig_grade),
								exec_grade(other.exec_grade)
{
	*this = other;
}

AForm &AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
		this->is_signed = other.is_signed;
	}
	return *this;
}
AForm::~AForm() {}

std::string AForm::getName() const
{
	return this->name;
}

std::string AForm::getTarget() const
{
	return this->target;
}

bool	AForm::getIsSigned() const
{
	return this->is_signed;
}

int	AForm::getSignedGrade() const
{
	return this->sig_grade;
}

int	AForm::getExecGrade() const
{
	return this->exec_grade;
}

void	AForm::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() > this->getSignedGrade())
		throw AForm::GradeTooLowException();
	else
		this->is_signed = true;
}

void	AForm::checkGrades(Bureaucrat const &bur) const
{
	if (!this->is_signed)
		throw AForm::NotSignedException();
	 if (bur.getGrade() > this->getExecGrade())
	 	throw AForm::GradeTooLowExecException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::GradeTooLowExecException::what() const throw()
{
	return ("Bureaucrat grade too low for execute");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("The form isn't signed");
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform)
{
	if (Aform.getIsSigned())
		std::cout << "AForm: " << Aform.getName() << ". Is signed: yes. Grade required to sign: "
			<< Aform.getSignedGrade() << ". Grade required to execute: " << Aform.getExecGrade()
			<< std::endl;
	else
		std::cout << "AForm: " << Aform.getName() << ". Is signed: no. Grade required to sign: "
			<< Aform.getSignedGrade() << ". Grade required to execute: " << Aform.getExecGrade()
			<< std::endl;
	return out;
}