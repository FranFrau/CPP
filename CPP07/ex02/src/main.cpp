/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 22:02:45 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/24 20:16:58 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

int			main(void)
{
	unsigned int	i;
	Array<int>		tab(5);
	Array<char>		tab_char(3);
	Array<char>		tab_char2(3);
	Array<float>	tab_float;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	
	std::cout << CYAN << "--- Test 1 ---" << NONE << std::endl;
	std::cout << "size: " << tab.getSize() << std::endl;
	for (i = 0; i < tab.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab.getSize() - 1))
			std::cout << tab[i] << ", ";
		else
			std::cout << tab[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << RED << "Get element from unset cell" << NONE << std::endl;
		std::cerr << e.what() << '\n';
	}
	

	tab_char[0] = 'a';
	tab_char[1] = 'b';
	tab_char[2] = 'c';
	std::cout << std::endl << std::endl;
	std::cout << CYAN << "--- Test 2 tab_char---" << NONE << std::endl;
	std::cout << "size: " << tab_char.getSize() << std::endl;
	for (i = 0; i < tab_char.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char.getSize() - 1))
			std::cout << tab_char[i] << ", ";
		else
			std::cout << tab_char[i] << "]" << std::endl;
	}
	try
	{
		std::cout << tab_char[5] << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << RED << "Get element from unset cell" << NONE << std::endl;
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << std::endl;
	std::cout << CYAN << "--- Test 3 ---" << NONE << std::endl;
	try {
		std::cout << tab_float[0] << std::endl;}
	catch(std::exception const &e) {
		std::cout << RED << "Get element of empty array" << NONE << std::endl;
		std::cerr << e.what() << '\n'; }

	std::cout << std::endl << std::endl;
	std::cout << CYAN << "--- Test 4 ---" << NONE << std::endl;
	std::cout << "assignation (=) tab_char2 = tab_char" << std::endl;
	tab_char2 = tab_char;
	for (i = 0; i < tab_char2.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char2.getSize() - 1))
			std::cout << tab_char2[i] << ", ";
		else
			std::cout << tab_char2[i] << "]" << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << CYAN << "--- Test 5 ---" << NONE << std::endl;
	std::cout << "constructor copy tab_char3(tab_char2)" << std::endl;
	Array<char>		tab_char3(tab_char2);
	for (i = 0; i < tab_char3.getSize(); i++)
	{
		if (i == 0)
			std::cout << "value: [";
		if (i >= 0 && i < (tab_char3.getSize() - 1))
			std::cout << tab_char3[i] << ", ";
		else
			std::cout << tab_char3[i] << "]" << std::endl;
	}
	return 0;
}
