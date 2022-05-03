/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:41:37 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/03 20:50:58 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
 	{ 
		Character *bob = new Character("Bob");
	
		bob->equip(new Ice());
		bob->equip(new Ice());
		bob->equip(new Cure());
		bob->equip(new Cure());
		bob->equip(new Ice());
		bob->unequip(3);

		std::cout << "---------- COPY OPERATOR ----------" << std::endl;
		Character *jim = new Character("Jim");
		bob->use(2, *jim);
		*jim = *bob;
		bob->use(0, *jim);
		jim->use(1, *bob);
		delete bob;
		delete jim;
	}
	{
		std::cout << "---------- COPY CONSTRUCTOR ----------" << std::endl;
		Character *one = new Character("María");
		one->equip(new Ice());
		Character *two = new Character(*one);
		two->equip(new Cure());
		two->use(0, *one);
		delete one;
		delete two;
	}
	{
		std::cout << "---------- SUBJECT MAIN ----------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
	//system("leaks -q interface");
	return 0;
}