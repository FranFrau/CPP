/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:39:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/08 12:44:07 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		bool				_isInKeeperMode;
		static const int	_maxHitPoints = 100;
		static const int	_maxEnergyPoints = 50;
		static const int	_maxAttackDamage = 20;
	public:
		void	attack(std::string const & target);
		void	setKeeperMode(bool keeper);
		void	guardGate();
		int		getMaxAttackDamage(void);
		int		getMaxEnergyPoints(void);
		int		getMaxHitPoint(void);
		bool	getKeeperMode();
		
		ScavTrap();
		ScavTrap(ScavTrap& scavTrap);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap& equals);
};

#endif