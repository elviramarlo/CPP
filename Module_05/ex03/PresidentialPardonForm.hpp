/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:43:05 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/06 15:03:51 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		void	execute(Bureaucrat const & executor) const;
};