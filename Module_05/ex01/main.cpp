/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:34:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/05 17:25:38 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Form form1("b34", 100, 10);
		Bureaucrat bur("Isabel", 50);
		std::cout << form1;
		bur.signForm(form1);
		std::cout << form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	try
	{
		Form form1("b34", 10, 10);
		Bureaucrat bur("Isabel", 50);
		bur.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}