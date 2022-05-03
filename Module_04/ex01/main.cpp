/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:52:31 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 21:13:29 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMALS 4

int main()
{
	const int n_animals = 4;
	const Animal *animals[n_animals];

	for (int i = 0; i < n_animals; i++)
	{
		if (i & 1)
			animals[i] = new Dog();
		if (!(i & 1))
			animals[i] = new Cat();
	}
	for (int i = 0; i < n_animals; i++)
	{
		std::cout << i + 1 << ". " << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < n_animals; i++)
		delete animals[i];
	
	std::cout << std::endl << "----- DEEP COPY (CONSTRUCTOR)-----" << std::endl;
 	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);

	dog1->think();
	delete dog1;
	delete dog2;

	std::cout << std::endl << "----- DEEP COPY (OPERATOR)-----" << std::endl;
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();

	*cat2 = *cat1;
	cat2->think();
	delete cat1;
	delete cat2;
	//system("leaks -q polymorphism");
}