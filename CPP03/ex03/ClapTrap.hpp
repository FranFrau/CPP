/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:50:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 18:27:24 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#define RED "\033[31m"
#define NONE "\033[0m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"

class	ClapTrap
{
	protected:
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
		void		addEnergyPoint(int value);
		int			getMaxAttackDamage(void);
		int			getMaxEnergyPoints(void);
		int			getMaxHitPoint(void);
		int			getAttackDamage(void);
		int			getEnergyPoint(void);
		int			getHitPoint(void);
		std::string	getName(void);

		ClapTrap();
		ClapTrap(ClapTrap& clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap& equals);
};

#endif