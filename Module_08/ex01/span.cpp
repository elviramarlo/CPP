/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:44:18 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/30 18:14:34 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N): size(N) {}

Span::~Span() {}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->size = other.size;
		this->nums = other.nums;
	}
	return *this;
}

void	Span::addNumber(int num)
{
	if (this->nums.size() >= this->size)
		throw Span::TooManyNumbersException();
	this->nums.push_back(num);
}

int	Span::shortestSpan()
{
	std::vector<int> sorted = this->nums;
	unsigned int	shortest_span;

	if (this->nums.size() <= 1)
		throw Span::NoSpanToFindException();
	std::sort(sorted.begin(), sorted.end());
	shortest_span = sorted[1] - sorted[0];
	for (int i = 1; i <= sorted.size(); i++)
	{
		if ((sorted[i] - sorted[i - 1]) < shortest_span) 
			shortest_span = sorted[i] - sorted[i - 1];
	}
	return shortest_span;
}

int	Span::longestSpan()
{
	std::vector<int> sorted = this->nums;
	unsigned int longest_span;

	if (this->nums.size() <= 1)
		throw Span::NoSpanToFindException();
	std::sort(sorted.begin(), sorted.end());
	longest_span = sorted[1] - sorted[0];
	for (int i = 1; i <= sorted.size() - 1; i++)
	{
		if ((sorted[i] - sorted[i - 1]) > longest_span) 
			longest_span = sorted[i] - sorted[i - 1];
	}
	return longest_span;
}

const char* Span::TooManyNumbersException::what() const throw()
{
	return ("Impossible to add a new number");
}

const char* Span::NoSpanToFindException::what() const throw()
{
	return ("Not enough numbers");
}