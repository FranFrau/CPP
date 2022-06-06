/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:50:52 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 17:04:10 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_isInKeeperMode = false;
	this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	this->_attackDamage = this->_maxAttackDamage;
	this->_name = "ppunzo";
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_isInKeeperMode = false;
	this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	this->_attackDamage = this->_maxAttackDamage;
	this->_name = name;
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& scavTrap)
{
	*this = scavTrap;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap& equals)
{
	this->_name = equals._name;
	this->_hitPoints = equals._hitPoints;
	this->_energyPoints = equals._energyPoints;
	this->_attackDamage = equals._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!getEnergyPoint() || !getHitPoint())
	{
		std::cout << "No energy or hit point left" << std::endl;
		return ;
	}
	else
		this->_energyPoints--;
	this->_attackDamage += 1;
	std::cout << "ScavTrap " << getName() << " attacks " << target
	<< ", causing " << getAttackDamage() << " points of damage!" 
	<< std::endl << "Energy points left: " << getEnergyPoint() << std::endl;
}

bool	ScavTrap::getKeeperMode()
{
	return this->_isInKeeperMode;
}

void	ScavTrap::setKeeperMode(bool keeper)
{
	this->_isInKeeperMode = keeper;
}

void	ScavTrap::guardGate()
{
	if (getKeeperMode())
		std::cout << "You already are in keeper mode" << std::endl;
	else
	{
		std::cout << "You are now in keeper mode" << std::endl;
		setKeeperMode(true);
	}
}