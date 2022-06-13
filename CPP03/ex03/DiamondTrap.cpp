/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:32:12 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:13:09 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name")
{
	this->_maxEnergyPoints = ScavTrap::getMaxEnergyPoints();
	this->_energyPoints = this->_maxEnergyPoints;
	this->_name = name;
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap() : FragTrap("ppunzo_clap_name")
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

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:32:12 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:09:10 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name")
{
	this->_maxEnergyPoints = ScavTrap::getMaxEnergyPoints();
	this->_energyPoints = this->_maxEnergyPoints;
	this->_name = name;
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap() : FragTrap("ppunzo_clap_name")
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

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}