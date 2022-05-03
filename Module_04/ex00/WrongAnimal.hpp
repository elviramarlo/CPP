/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:50:46 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 16:50:46 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &other);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &other);
		std::string	getType(void) const;
		void	makeSound() const ;
};
