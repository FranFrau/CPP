/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:09:48 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/21 17:50:18 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include <unistd.h>
#include <iostream>
#include <cstdlib>
Base * generate(void)
{
	std::srand((unsigned int)std::time(NULL));
	switch (std::rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return (0);
}

void identify(Base* p)
{
	A* ptrA = dynamic_cast <A*> (p);
	B* ptrB = dynamic_cast <B*> (p);
	C* ptrC = dynamic_cast <C*> (p);

	std::cout << " " << ptrA <<  " " << ptrB <<  " " << ptrC << std::endl;
	if (ptrA)
		std::cout << "Type: A" << std::endl;
	else if (ptrB)
		std::cout << "Type: B" << std::endl;
	else if (ptrC)
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Tipo non trovato" << std::endl;
}

void identify(Base& p)
{
	
	B ptrB = dynamic_cast <B&> (p);

	try
	{
		A ptrA = dynamic_cast <A&> (p);
		std::cout << "Type: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B ptrB = dynamic_cast <B&> (p);
			std::cout << "Type: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C ptrC = dynamic_cast <C&> (p);
				std::cout << "Type: C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Type not found" << std::endl;
			}
		}
	}
}

int main()
{
	Base *a;
	Base *b;
	Base *c;

	std::cout << GREEN << "**** Constructor ****" << NONE << std::endl << std::endl;
	std::srand((unsigned int)std::time(NULL));
	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;
	a = generate();
	identify(a);
	sleep(std::rand() % 3);
	b = generate();
	identify(b);
	sleep(std::rand() % 3);
	c = generate();
	identify(c);
	std::cout << std::endl << RED << "**** Decostructor ****  " << NONE << std::endl << std::endl;
	delete a;
	delete b;
	delete c;
	return (0);
}
