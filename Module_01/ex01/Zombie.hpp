/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:28:21 by elvmarti          #+#    #+#             */
/*   Updated: 2022/04/10 17:24:50 by elvmarti         ###   ########.fr       */
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
		Zombie();
		~Zombie(void);

		void 	zombie_name(std::string name);
		void	announce(void);

};

Zombie* zombieHorde(int N, std::string name);

#endif