/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:36:23 by elvmarti          #+#    #+#             */
/*   Updated: 2022/06/02 17:07:40 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <vector>
#include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(void) {};
		MutantStack(MutantStack<T> const &other): std::stack<T>(other) {};
		~MutantStack(void) {};
		MutantStack &operator=(MutantStack<T> const &other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		};

		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
		const_iterator begin() const { return this->c.begin(); };
		const_iterator end() const { return this->c.end(); };
		reverse_iterator rbegin() { return this->c.rbegin(); };
		reverse_iterator rend() { return this->c.rend(); };
		const_reverse_iterator rbegin() const { return this->c.rbegin(); };
		const_reverse_iterator rend() const { return this->c.rend(); };


};