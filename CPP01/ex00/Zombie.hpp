/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:12:34 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 16:42:11 by ffrau            ###   ########.fr       */
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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif