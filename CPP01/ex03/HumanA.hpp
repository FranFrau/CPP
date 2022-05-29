/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:01:30 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 16:56:54 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		Weapon		getWeapon(void);
		std::string	getName(void);
		void		attack(void);

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif