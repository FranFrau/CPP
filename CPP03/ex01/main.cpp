/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:40:19 by ltorrean          #+#    #+#             */
/*   Updated: 2022/06/06 12:15:34 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define RED "\033[31m"
#define NONE "\033[0m"

int main( void )
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	ClapTrap a("Pippo");
	ClapTrap b;
	ScavTrap c("Pluto");
	ScavTrap d("vbeffa");

	std::cout << RED << "**** Testing ****  " << NONE << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());

	d.attack(a.getName());
	a.takeDamage(d.getAttackDamage());

	a.beRepaired(2);
	b.beRepaired(3);
	c.beRepaired(4);

	d.guardGate();
	d.guardGate();
	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
}