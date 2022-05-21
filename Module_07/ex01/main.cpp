/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:14:41 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/21 21:32:08 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const int nums[4]= {2, 4, 5, 23};
	const std::string str[3] = {"I", "like", "potatoes"};
	const char c[] = "whatsupp";

	::iter(nums, 4, ::printElement);
	::iter(str, 3, ::printElement);
	::iter(c, 8, ::printElement);

	return 0;
}