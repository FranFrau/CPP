/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:50:35 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/06 17:35:20 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	this->_attackDamage = this->_maxAttackDamage;
	this->_name = "ppunzo";
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	this->_attackDamage = this->_maxAttackDamage;
	this->_name = name;
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap& FragTrap)
{
	*this = FragTrap;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap& equals)
{
	this->_name = equals._name;
	this->_hitPoints = equals._hitPoints;
	this->_energyPoints = equals._energyPoints;
	this->_attackDamage = equals._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << RED << "GIVE ME A FIVE! " << YELLOW << std::endl;
	std::cout << "           ___..__" << std::endl;
	std::cout << "  __..--\"\"\" ._ __.'" << std::endl;
	std::cout << "              \"-..__" << std::endl;
	std::cout << "            '\"--..__\";" << std::endl;
	std::cout << " ___        '--...__\"\";" << std::endl;
	std::cout << "    `-..__ '\"---..._;\"" << std::endl;
	std::cout << "          \"\"\"\"----'  " << CYAN << "_.-._" << std::endl;
	std::cout << "                    | | | |_" << std::endl;
	std::cout << "                    | | | | |" << std::endl;
	std::cout << "                    | | | | |" << std::endl;
	std::cout << "                  _ |  '-._ |" << std::endl;
	std::cout << "                  \\`\\`-.'-._;" << std::endl;
	std::cout << "                   \\    '   |" << std::endl;
	std::cout << "                    \\  .`  /" << std::endl;
	std::cout << "                     |    | "<< NONE << std::endl;
	
}