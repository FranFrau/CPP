/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:53:11 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 17:10:24 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		Weapon		getWeapon(void);
		std::string	getName(void);
		void		attack(void);
		void		setWeapon(Weapon &weapon);

		HumanB(std::string name);
		~HumanB();
};

#endif