/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:39:32 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 17:05:56 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static const int	_maxHitPoints = 100;
		static const int	_maxEnergyPoints = 100;
		static const int	_maxAttackDamage = 30;
	public:
		void	highFivesGuys(void);
		
		FragTrap();
		FragTrap(FragTrap& clapTrap);
		FragTrap(std::string name);
		~FragTrap();
		FragTrap& operator=(FragTrap& equals);
};

#endif