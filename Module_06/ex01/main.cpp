/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:04:58 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/18 19:11:52 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int num;
};

uintptr_t serialize(Data *ptr) // bits don't change
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data data;
	Data *ptrData;
	uintptr_t ptr;

	data.num = 58;
	ptr = serialize(&data);
	ptrData = deserialize(ptr);

	std::cout << "data address:    " << &data << std::endl;
	std::cout << "ptrData address: " << ptrData << std::endl;
	std::cout << "data content: " << data.num << std::endl;
	std::cout << "ptrData content: " << ptrData->num << std::endl;

	data.num = 10;

	std::cout << "data content: " << data.num << std::endl;
	std::cout << "ptrData content: " << ptrData->num << std::endl;	
}
