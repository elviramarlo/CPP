/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:30:15 by elvmarti          #+#    #+#             */
/*   Updated: 2022/06/02 17:10:06 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>

class Span
{
	private:
		unsigned int	size;
		std::vector<int>	nums;

	public:
		Span(unsigned int N);
		Span(Span const &other);
		~Span();
		Span &operator=(Span const &other);
	
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

		class TooManyNumbersException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class NoSpanToFindException: public std::exception
		{
			public:
				const char* what() const throw();
		};
};
