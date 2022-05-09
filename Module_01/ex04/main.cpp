/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:41:39 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/09 21:34:36 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int	error(std::string error)
{
	std::cout << error << std::endl;
	return 1;
}

static void	replace(std::ifstream &f_r, std::ofstream &f_w, std::string s1, std::string s2)
{
	std::string		file_string;
	size_t			first_pos;

	while (f_r.good())
	{
		std::getline(f_r, file_string);
		first_pos = file_string.find(s1);
		while (first_pos != std::string::npos) //if it's a match
		{
			file_string.erase(first_pos, s1.length());
			file_string.insert(first_pos, s2);
			first_pos = file_string.find(s1, first_pos + 1); //only includes characters after pos
		}
		f_w << file_string << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	file_read;
	std::ofstream	file_write;
	std::string		filename;
	std::string		str1;
	std::string		str2;

	if (argc != 4)
		return error("Error: wrong number of arguments");
	filename = argv[1];
	str1 = argv[2];
	str2 = argv[3];
	if (str1.empty() || str2.empty())
		return error("Error: empty string");
	file_read.open(filename, std::ios::in);
	file_write.open(filename + ".replace", std::ios::out);
	if (!file_read.is_open() || !file_write.is_open())
		return error("Error opening the file");
	replace(file_read, file_write, str1, str2);
	file_read.close();
	file_write.close();
	return 0;
}
