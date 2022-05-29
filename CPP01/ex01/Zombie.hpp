/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:15:48 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 11:21:06 by ffrau            ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);