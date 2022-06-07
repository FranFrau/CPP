/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:40:19 by ltorrean          #+#    #+#             */
/*   Updated: 2022/06/07 12:48:01 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    // DiamondTrap Pippo;
    // DiamondTrap Pluto("Pluto");

    // Pippo.attack(Pluto.getName());
    // Pluto.takeDamage(Pluto.getAttackDamage());

    // Pippo.beRepaired(2);
    // Pluto.beRepaired(2);

    // Pluto.guardGate();
    // Pluto.highFivesGuys();
    // Pluto.whoAmI();


    // return (0);
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	ScavTrap a("Pippo");
	ScavTrap b;
	FragTrap c("Pluto");
	FragTrap d("vbeffa");
	DiamondTrap	e("Carlo");
	DiamondTrap	f("Zendo");

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

	f.attack(e.getName());
	e.takeDamage(f.getAttackDamage());

	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
}