/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:44:48 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/17 17:16:32 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string string = "HI THIS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "ADDRESS:" << std::endl;
	std::cout << "String:    " << &string << std::endl;
	std::cout << "StringPTR: "<< stringPTR << std::endl;
	std::cout << "StringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "STRING: " << std::endl;
	std::cout << "StringPTR: "<< *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
}