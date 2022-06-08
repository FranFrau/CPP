/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:39:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/08 12:43:10 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		int			_maxEnergyPoints;
		int			_energyPoints;
	public:
		void	guardGate();
		void	attack(std::string const & target);
		int		getMaxEnergyPoints(void);
		int		getEnergyPoint(void);
		bool	getKeeperMode();
		void	setKeeperMode(bool keeper);
		void	whoAmI();
		
		DiamondTrap();
		DiamondTrap(DiamondTrap& diamondTrap);
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(DiamondTrap& equals);
};

#endif