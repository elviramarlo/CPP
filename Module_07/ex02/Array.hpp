/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:53:57 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/21 22:33:40 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		T 				*element;
		unsigned int	len;

	public:
		Array(void): element(new T[0]), len(0) {};
		Array(unsigned int n): element(new T[n]), len(n) {};
		Array(Array const &other) { *this = other; };
		~Array() { delete [] element; };
		Array &operator=(Array const &other)
		{
			if (this != &other)
			{
				this->len = other.len;
				for (int i = 0; i < len; i++)
					this->element[i] = other.element[i];
			}
			return *this;
		};
		T	&operator[](unsigned int i) const
		{
			if (i >= this->len || this->len == 0)
				throw std::exception();
			return this->element[i];
		};
		unsigned int size(void) const { return this->len; };
};
