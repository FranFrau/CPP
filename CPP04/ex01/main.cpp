/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:47:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/10 10:57:28 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define RED "\033[31m"
#define NONE "\033[0m"

int main()
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	Animal* meta = new Animal();
	Dog *j = new Dog();
	Cat *cat = new Cat();
	WrongAnimal* evilAldo = new WrongAnimal();
	WrongAnimal* evilCat = new WrongCat();
	
	std::cout << RED << "**** Testing ****  " << NONE << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	evilAldo->makeSound();
	evilCat->makeSound();

	cat->getBrain()->getIdea(1);
	
	for (int i = 0; i < 100; i++)
		cat->getBrain()->setIdeas("meow");

	for (int i = 0; i < 12; i++)
		cat->getBrain()->setIdeas("mousee");

	for (int i = 0; i < 100; i++)
		std::cout << cat->getBrain()->getIdea(i) << " ";

	std::cout << std::endl;

	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
	delete meta;
	delete j;
	delete cat;
	delete evilAldo;
	delete evilCat;
}
