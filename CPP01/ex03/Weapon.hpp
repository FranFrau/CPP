/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:44:04 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 17:13:01 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		std::string	getType(void);
		void		setType(std::string type);
		
		Weapon(void);
		Weapon(std::string type);
		~Weapon();
};

#endif