/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:40:19 by ltorrean          #+#    #+#             */
/*   Updated: 2022/06/06 17:31:03 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	ScavTrap a("Pippo");
	ScavTrap b;
	FragTrap c("Pluto");
	FragTrap d("vbeffa");

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

	a.guardGate();
	a.guardGate();

	d.highFivesGuys();
	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
}