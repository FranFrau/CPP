/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:32:12 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/07 12:48:07 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_maxEnergyPoints = ScavTrap::getMaxEnergyPoints();
	this->_energyPoints = this->_maxEnergyPoints;
	this->_name = name;
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->_maxEnergyPoints = ScavTrap::getMaxEnergyPoints();
	this->_energyPoints = this->_maxEnergyPoints;
	this->_name = "ppunzo";
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& DiamondTrap)
{
	*this = DiamondTrap;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& equals)
{
	this->_name = equals._name;
	this->_hitPoints = equals._hitPoints;
	this->_energyPoints = equals._energyPoints;
	this->_attackDamage = equals._attackDamage;
	return (*this);
}

int	DiamondTrap::getMaxEnergyPoints(void)
{
	return (this->_maxEnergyPoints);
}

int	DiamondTrap::getEnergyPoint(void)
{
	return (this->_energyPoints);
}

void	DiamondTrap::attack(std::string const & target)
{
	if (!getEnergyPoint() || !getHitPoint())
	{
		std::cout << "No energy or hit point left" << std::endl;
		return ;
	}
	else
		this->_energyPoints--;
	ScavTrap::attack(target);
}
