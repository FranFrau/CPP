/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:50:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/04 18:13:16 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = "ppunzo"; //This is a tradition started by vbeffa. Check his github (valeriobeffa)
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& clapTrap) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	*this = clapTrap;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (getEnergyPoint() == 1)
		this->_energyPoints = 0;
	else
		this->_energyPoints--;
	std::cout << "ClapTrap " << getName() << " attacks " << target
	<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int) amount > getHitPoint())
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
    std::cout << this->_name << " takes " << amount << " damage points! " << getHitPoint() << " HP remaining" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
    std::cout << this->_name << " gained " << amount << " HP points! " << getHitPoint() << " remaining " << std::endl;
}

int	ClapTrap::getHitPoint(void)
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoint(void)
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

ClapTrap& ClapTrap::operator=(ClapTrap& equals)
{
	this->_name = equals._name;
	this->_hitPoints = equals._hitPoints;
	this->_energyPoints = equals._energyPoints;
	this->_attackDamage = equals._attackDamage;
	return (*this);
}
