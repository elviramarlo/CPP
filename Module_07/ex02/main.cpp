/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:06:40 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/21 22:32:58 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define VAL 8

int	main(void)
{
	try
	{
		Array<int> nums(VAL);
		Array<int> nums2;

		for(int i = 0; i < VAL; i++)
			nums[i] = i;
		for(int i = 0; i < VAL; i++)
			std::cout << nums[i] << std::endl;
		std::cout << "----------" << std::endl;
		nums[nums.size() - 1] = 58;
		nums2 = nums;
		for(int i = 0; i < VAL; i++)
			std::cout << nums2[i] << std::endl;
		nums[10] = 9;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Element out of the limits" << '\n';
	}
	
	Array<char> chars(5);

	for (int i = 0; i < 5; i++)
	{
		chars[i] = 'a';
		std::cout << chars[i] << std::endl;
	}
	//system("leaks templates");
}