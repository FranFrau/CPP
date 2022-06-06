/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:39:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 18:36:40 by ffrau            ###   ########.fr       */
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
	public:
		void	guardGate();
		void	attack(std::string const & target);
		bool	getKeeperMode();
		void	setKeeperMode(bool keeper);
		
		DiamondTrap();
		DiamondTrap(DiamondTrap& clapTrap);
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(DiamondTrap& equals);
};

#endif