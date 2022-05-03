/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:02:15 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/02 19:10:35 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(Brain const &other);
		~Brain();

		Brain &operator=(Brain const &other);

		void	printIdeas() const;
};

