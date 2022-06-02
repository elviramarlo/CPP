/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:56:51 by elvmarti          #+#    #+#             */
/*   Updated: 2022/06/02 17:10:35 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <time.h>

int	main(void)
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(11);
		sp.addNumber(6);
		sp.addNumber(2);
		sp.addNumber(9);
		sp.addNumber(12);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp2(1000);
	srand(time(NULL));

	try
	{
		for (int i = 0; i < 1000; i++)
		{
			int num = rand() % 500000;
			sp2.addNumber(num);
			//std::cout << num << std::endl;
		}
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}