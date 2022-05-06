/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:21:27 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 17:06:40 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		const int			sig_grade;
		const int			exec_grade;
		const std::string	target;
		bool				is_signed;
	
	public:
		AForm(const std::string _name, const std::string _target, const int s_grade,
				const int _e_grade);
		AForm(AForm const &other);
		virtual ~AForm();
		AForm &operator=(AForm const &other);

		std::string getName() const;
		std::string	getTarget() const;
		bool		getIsSigned() const;
		int			getSignedGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat const &bur);
		void		checkGrades(Bureaucrat const &bur) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowExecException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NotSignedException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);
