/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:15:48 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 16:42:45 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string		_name;
	
	public:
		void		announce(void);
		std::string	getName(void);
		void		setName(std::string name);

		Zombie(void);
		~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif