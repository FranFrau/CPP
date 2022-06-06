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

#include "ClapTrap.hpp"
#define RED "\033[31m"
#define NONE "\033[0m"

int main( void )
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	ClapTrap a("Foo");
	ClapTrap b;

	std::cout << RED << "**** Testing ****  " << NONE << std::endl;

	b.beRepaired(3);
	b.takeDamage(2);
	b.beRepaired(3);
	for (int i = 0; i < 11; i++)
		b.attack("Elisabeth");
    b.addEnergyPoint(10);
	for (int i = 0; i < 3; i++)
		b.attack("Elisabeth");
	b.beRepaired(3);
	a.attack("Luca");
	a.takeDamage(100);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Pippo");
	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
}