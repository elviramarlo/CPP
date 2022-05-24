/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:28:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/17 17:04:06 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif