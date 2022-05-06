/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:33:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 17:12:39 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string _name, const int _sig_grade, const int _exec_grade):
			name(_name), exec_grade(_exec_grade), sig_grade(_sig_grade)
{
	this->is_signed = false;
	if (this->exec_grade < 1 || this->sig_grade < 1)
		throw Form::GradeTooHighException();
	if (this->exec_grade > 150 || this->sig_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other): name(other.name), sig_grade(other.sig_grade),
								exec_grade(other.exec_grade)
{
	*this = other;
}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
	{
		this->is_signed = other.is_signed;
	}
	return *this;
}
Form::~Form() {}

std::string Form::getName() const
{
	return this->name;
}

bool		Form::getIsSigned() const
{
	return this->is_signed;
}

int			Form::getSignedGrade() const
{
	return this->sig_grade;
}

int			Form::getExecGrade() const
{
	return this->exec_grade;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getSignedGrade())
		throw Form::GradeTooLowException();
	else
		this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	if (form.getIsSigned())
		std::cout << "Form: " << form.getName() << ". Is signed: yes. Grade required to sign: "
			<< form.getSignedGrade() << ". Grade required to execute: " << form.getExecGrade()
			<< std::endl;
	else
		std::cout << "Form: " << form.getName() << ". Is signed: no. Grade required to sign: "
			<< form.getSignedGrade() << ". Grade required to execute: " << form.getExecGrade()
			<< std::endl;
	return out;
}