/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 21:52:31 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 18:24:25 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		
		std::cout << j->getType() << " -> Dog" << std::endl;
		std::cout << i->getType() << " -> Cat" << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	std::cout << "----------------" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* wrong = new WrongCat();
		
		std::cout << wrong->getType() << " -> WrongCat" << std::endl;
		meta->makeSound();
		wrong->makeSound();
		delete meta;
		delete wrong;
	}
	//system("leaks -q polymorphism");
}