/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:15:24 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/21 21:32:48 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	iter(T *array, const int len, void f(T element))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template<typename T>
void	printElement(T element)
{
	std::cout << element << std::endl;
}
