/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:32:10 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/04 19:34:15 by elvmarti         ###   ########.fr       */
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
		~Bureaucrat();
		
		std::string getName() const;
		int			getGrade() const;
		std::string		GradeTooHighException() throw ();
		std::string		GradeTooLowException() throw ();
		void		incrementGrade();
		void		decrementGrade();		
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);