/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:32:10 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 17:01:13 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	
	public:
		Bureaucrat(const std::string &name, int i);
		Bureaucrat(Bureaucrat const &other);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &other);
		
		std::string getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);