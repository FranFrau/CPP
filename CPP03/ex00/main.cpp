/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:40:19 by ltorrean          #+#    #+#             */
/*   Updated: 2022/06/04 18:17:04 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    std::cout << "**** Constructor ****" << std::endl;
    ClapTrap a("Foo");
    ClapTrap b;
    std::cout << "**** Testing ****  " << std::endl;
    b.beRepaired(3);
    b.takeDamage(2);
    b.beRepaired(3);
    for (int i = 0; i < 11; i++)
        b.attack("Elisabeth");
    b.beRepaired(3);
    a.attack("Luca");
    a.takeDamage(100);
    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("Pippo");
    std::cout << "**** Destructor ****" << std::endl;
}