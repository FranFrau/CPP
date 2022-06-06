/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:50:12 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 17:31:06 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define RED "\033[31m"
#define NONE "\033[0m"
#include <iostream>

class	ClapTrap
{
	private:
		static const int	_maxHitPoints = 10;
		static const int	_maxEnergyPoints = 10;
		static const int	_maxAttackDamage = 0;
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHitPoint(void);
		int			getEnergyPoint(void);
		int			getAttackDamage(void);
		void		addEnergyPoint(int value);
		std::string	getName(void);

		ClapTrap();
		ClapTrap(ClapTrap& clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap& equals);
};

#endif