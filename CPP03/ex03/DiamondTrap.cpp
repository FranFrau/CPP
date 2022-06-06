/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:32:12 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 18:39:21 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ScavTrap::getEnergyPoint();
}

// DiamondTrap::DiamondTrap()
// {
// 	this->_hitPoints = this->_maxHitPoints;
// 	this->_energyPoints = this->_maxEnergyPoints;
// 	this->_attackDamage = this->_maxAttackDamage;
// 	this->_name = "ppunzo";
// 	std::cout << "DiamondTrap Default constructor called" << std::endl;
// }

// DiamondTrap::DiamondTrap(std::string name)
// {
// 	this->_hitPoints = this->_maxHitPoints;
// 	this->_energyPoints = this->_maxEnergyPoints;
// 	this->_attackDamage = this->_maxAttackDamage;
// 	this->_name = name;
// 	std::cout << "DiamondTrap Name constructor called" << std::endl;
// }

// DiamondTrap::DiamondTrap(DiamondTrap& DiamondTrap)
// {
// 	*this = DiamondTrap;
// 	std::cout << "DiamondTrap Copy constructor called" << std::endl;
// }

// DiamondTrap::~DiamondTrap()
// {
// 	std::cout << "DiamondTrap Destructor called" << std::endl;
// 	return ;
// }

// DiamondTrap& DiamondTrap::operator=(DiamondTrap& equals)
// {
// 	this->_name = equals._name;
// 	this->_hitPoints = equals._hitPoints;
// 	this->_energyPoints = equals._energyPoints;
// 	this->_attackDamage = equals._attackDamage;
// 	return (*this);
// }