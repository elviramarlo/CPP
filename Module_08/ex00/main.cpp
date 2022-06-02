/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:51:15 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/26 19:24:08 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::list<int> list1;
	std::vector<int> v;
	int num = 80;

	for(int i = 0; i < 50; i++)
		list1.push_back(i);
	for (int i = 50; i < 100; i++)
		v.push_back(i);
	
	if (easyfind(list1, num))
		std::cout << "Num " << num << " found" << std::endl;
	else
		std::cout << "Num " << num << " not found" << std::endl;

	if (easyfind(v, num))
		std::cout << "Num " << num << " found" << std::endl;
	else
		std::cout << "Num " << num << " not found" << std::endl;
}