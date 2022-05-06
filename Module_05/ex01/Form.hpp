/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
{
	private:
		const std::string	name;
		const int			sig_grade;
		const int			exec_grade;
		bool				is_signed;
	
	public:
		Form(const std::string _name, const int sig_grade, const int _exec_grade);
		Form(Form const &other);
		~Form();
		Form &operator=(Form const &other);

		std::string getName() const;
		bool		getIsSigned() const;
		int			getSignedGrade() const;
		int			getExecGrade() const;

		void	beSigned(Bureaucrat &bur);

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
};

std::ostream &operator<<(std::ostream &out, const Form &form);
