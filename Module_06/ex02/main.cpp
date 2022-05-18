/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:31:25 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/18 21:39:19 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <time.h>

Base *generate(void)
{
	srand(time(NULL));
	int num = rand() % 3 + 1;
	Base *random;

	switch (num)
	{
		case 1: random = new A;
			break;
		case 2: random = new B;
			break;
		case 3: random = new C;
			break;
	}
	return random;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std:: cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std:: cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std:: cout << "C" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;

	return 0;
}