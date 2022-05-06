/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:21:03 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 21:46:36 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		void	execute(Bureaucrat const & executor) const;
};
