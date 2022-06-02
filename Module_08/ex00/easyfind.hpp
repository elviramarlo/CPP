/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:01:50 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/26 19:21:32 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

template<typename T>
bool easyfind(T container, int const num)
{
	typename T::const_iterator it;
	typename T::const_iterator ite =  container.end();
	
	for (it = container.begin(); it != ite; ++it)
	{
		if (*it == num)
			return true;
	}
	return false;
}