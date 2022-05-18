/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:28:40 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/18 17:24:41 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

static void	conversionInt(std::string string)
{
	int num;
	
	if (string.length() == 1 && !isdigit(string[0]))
		num = static_cast<int>(string[0]);
	else
		num = static_cast<int>(std::stoi(string));
	std::cout << "int: " << num << std::endl;
}

static void	conversionChar(std::string string)
{
	char c;
	int num;

	if (!isdigit(string[0]) && string.length() == 1)
		c = static_cast<char>(string[0]);
	else
	{
		num = static_cast<int>(std::stoi(string));
		c = static_cast<char>(num);
	}
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: non dispayable" << std::endl;
}

static void conversionFloat(std::string string)
{
	float f;

	if (string.length() == 1 && !isdigit(string[0]))
		f = static_cast<float>(string[0]);
	else
		f = static_cast<float>(std::stof(string));
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

static void conversionDouble(std::string string)
{
	double d;

	if (string.length() == 1 && !isdigit(string[0]))
		d = static_cast<double>(string[0]);
	else
		d = static_cast<double>(std::stof(string));
	std::cout << "double: " << d << std::endl;	
}

static void	conversions(int i, char *arg)
{
	std::string string[4] = {"char", "int", "float", "double"};
	
	try
	{
		switch (i)
		{
			case 1: conversionChar(arg);
				break;
			case 2: conversionInt(arg);
				break;
			case 3: conversionFloat(arg);
				break;
			case 4: conversionDouble(arg);
		}
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << string[i - 1] << ": impossible" << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << string[i - 1] << ": out of range" << std::endl;
	}	
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return 1;
	}
	for (int i = 1; i < 5; i++)
		conversions(i, argv[1]);
	return 0;
}