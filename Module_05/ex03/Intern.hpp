/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:34:22 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/06 15:29:03 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern &operator=(Intern const &other);

		AForm*	makeForm(std::string form_name, std::string target);

		class NotFormException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};
