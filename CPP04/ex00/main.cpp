/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:47:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/10 14:22:42 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"

int main()
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* evilAldo = new WrongAnimal();
	const WrongAnimal* evilCat = new WrongCat();
	
	std::cout << RED << "**** Testing ****  " << NONE << std::endl;
	std::cout << GREEN << "**** Types ****  " << NONE << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << GREEN << "**** Sounds ****  " << NONE << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	evilAldo->makeSound();
	evilCat->makeSound();

	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
	delete meta;
	delete j;
	delete i;
	delete evilAldo;
	delete evilCat;
}
