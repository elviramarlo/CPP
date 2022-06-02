/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:06:40 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/31 15:28:21 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define VAL 8

int	main(void)
{
	try
	{
		Array<int> nums(VAL);

		for(int i = 0; i < VAL; i++)
			nums[i] = i;
		for(int i = 0; i < VAL; i++)
			std::cout << nums[i] << std::endl;
		std::cout << "----------" << std::endl;
		nums[nums.size() - 1] = 58;
	
		Array<int> nums2 = nums;

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
 /* 
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		Array<int> tmp = numbers;
		Array<int> test(tmp);
    }
 
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
} */