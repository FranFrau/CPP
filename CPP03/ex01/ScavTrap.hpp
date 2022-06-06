/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:39:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 13:37:37 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool				_isInKeeperMode;
		static const int	_maxHitPoints = 100;
		static const int	_maxEnergyPoints = 50;
		static const int	_maxAttackDamage = 20;
	public:
		void	guardGate();
		void	attack(std::string const & target);
		bool	getKeeperMode();
		void	setKeeperMode(bool keeper);
		
		ScavTrap();
		ScavTrap(ScavTrap& clapTrap);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap& equals);
};

#endif