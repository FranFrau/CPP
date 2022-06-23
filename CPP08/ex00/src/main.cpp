/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:13:58 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 18:31:52 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <bootparams.h>

void	print(bool printMessage, std::string type)
{
	if (printMessage)
		std::cout << "Element found in " << type << std::endl;
	else
		std::cout << "Element not found in " << type << std::endl;
}

void	displayInt(int i)
{
	std::cout << i << " ";
}

int		main(void)
{
	std::vector<int> a;
	for (int i = 0; i < 10; i++)
		a.push_back(i + 1);

	std::cout << std::endl << CYAN << "**** Vector ****  " << NONE << std::endl << std::endl;
	std::cout << "Vector info: " << std::endl;
	for_each(a.begin(), a.end(), displayInt);
	std::cout << std::endl;

	print(easyfind(a, 5), "VECTOR");
	print(easyfind(a, 50), "VECTOR");

	std::cout << std::endl << CYAN << "**** List ****  " << NONE << std::endl << std::endl;
	std::list<int> b;
	for (int i = 0; i < 10; i++)
		b.push_back(i + 1);

	std::cout << "List info: " << std::endl;
	for_each(a.begin(), a.end(), displayInt);
	std::cout << std::endl;

	print(easyfind(b, 5), "LIST");
	print(easyfind(b, 50), "LIST");
}
