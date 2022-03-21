/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 22:13:02 by elvmarti          #+#    #+#             */
/*   Updated: 2022/03/21 22:37:44 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	c;
	
	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			x = 0;
			while (argv[i][x])
			{
				c = toupper(argv[i][x]);
				std::cout << c;
				x++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}