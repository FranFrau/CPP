/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:50:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 18:28:48 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(this->_maxHitPoints), _energyPoints(this->_maxEnergyPoints), _attackDamage(this->_maxAttackDamage)
{
	this->_name = "ppunzo";
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& clapTrap) : _hitPoints(this->_maxHitPoints), _energyPoints(this->_maxEnergyPoints), _attackDamage(this->_maxAttackDamage)
{
	*this = clapTrap;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(this->_maxHitPoints), _energyPoints(this->_maxEnergyPoints), _attackDamage(this->_maxAttackDamage)
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
	if (!getEnergyPoint() || !getHitPoint())
	{
		std::cout << "No energy or hit point left" << std::endl;
		return ;
	}
	else
		this->_energyPoints--;
	this->_attackDamage += 1;
	std::cout << "ClapTrap " << getName() << " attacks " << target
	<< ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoint() <= 0)
	{
		std::cout << "You already died" << std::endl;
		return ;
	}

	if ((int) amount > getHitPoint())
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

    std::cout << this->_name << " takes " << amount << " damage points! " << getHitPoint() << " HP remaining" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!getEnergyPoint() || !getHitPoint())
	{
		std::cout << "No energy or hit point left" << std::endl;
		return ;
	}
	else
		this->_energyPoints--;

	if ((this->_hitPoints + amount) > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;

    std::cout << this->_name << " gained " << amount << " HP points! " << getHitPoint() << " remaining " << std::endl;
}

void	ClapTrap::addEnergyPoint(int value)
{
	if (value > this->_maxEnergyPoints)
		this->_energyPoints = _maxEnergyPoints;
	else
		this->_energyPoints = value;
	std::cout << "Energy points filled, now you have " << getEnergyPoint() << " energy points" << std::endl;
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

int	ClapTrap::getMaxAttackDamage(void)
{
	return (this->_maxAttackDamage);
}

int	ClapTrap::getMaxEnergyPoints(void)
{
	return (this->_maxEnergyPoints);
}

int	ClapTrap::getMaxHitPoint(void)
{
	return (this->_maxHitPoints);
}
