/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:12:34 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 11:31:00 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
