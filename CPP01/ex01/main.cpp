/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:16:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 11:26:15 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int		n;
	Zombie	*z;
	
	std::cout << "Choose a number: ";
	std::cin >> n;
	z = zombieHorde(n, "Anto");
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete[] z;
	return 0;
}
