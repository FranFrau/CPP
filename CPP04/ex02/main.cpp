/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:47:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 22:36:06 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

int main()
{
	std::cout << RED << "**** Constructor ****" << NONE << std::endl;
	Dog *j = new Dog();
	Cat *cat = new Cat();
	WrongAnimal* evilAldo = new WrongAnimal();
	WrongAnimal* evilCat = new WrongCat();
	
	int n = 10;
	Animal *array[n];
	for(int k = 0; k < n; k++)
	{
		if(k < n / 2)
			array[k] = new Dog();
		else
			array[k] = new Cat();
	}
	std::cout << RED << "**** Testing ****  " << NONE << std::endl;
	std::cout << GREEN << "**** Types ****  " << NONE << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	std::cout << GREEN << "**** Sounds ****  " << NONE << std::endl;
	cat->makeSound();
	j->makeSound();
	evilAldo->makeSound();
	evilCat->makeSound();

	std::cout << GREEN << "**** Ideas ****  " << NONE << std::endl;
	cat->getBrain()->getIdea(1);
	
	for (int i = 0; i < 100; i++)
		cat->getBrain()->setIdeas("meow");

	for (int i = 0; i < 12; i++)
		cat->getBrain()->setIdeas("mousee");

	for (int i = 0; i < 100; i++)
	{ 
		if (cat->getBrain()->getIdea(i).compare("meow"))
			std::cout << YELLOW << cat->getBrain()->getIdea(i) << " ";
		else
			std::cout << CYAN << cat->getBrain()->getIdea(i) << " ";
	}
	std::cout << NONE;

	{
		for (int i = 0; i < 100; i++)
			cat->getBrain()->setIdeas("aaaa");
			
		Cat	tmpfile = *cat;
		for (int i = 0; i < 12; i++)
			std::cout << tmpfile.getBrain()->getIdea(i) << " " << cat->getBrain()->getIdea(i) << std::endl;

		for (int i = 0; i < 100; i++)
			cat->getBrain()->setIdeas("Aldone");

		std::cout << std::endl;

		for (int i = 0; i < 12; i++)
			std::cout << tmpfile.getBrain()->getIdea(i) << " " << cat->getBrain()->getIdea(i) << std::endl;

	}
	{
		for (int i = 0; i < 100; i++)
			j->getBrain()->setIdeas("bbbb");
			
		Dog	tmpfile = *j;
		for (int i = 0; i < 12; i++)
			std::cout << tmpfile.getBrain()->getIdea(i) << " " << j->getBrain()->getIdea(i) << std::endl;

		for (int i = 0; i < 100; i++)
			j->getBrain()->setIdeas("Giampy");

		std::cout << std::endl;

		for (int i = 0; i < 12; i++)
			std::cout << tmpfile.getBrain()->getIdea(i) << " " << j->getBrain()->getIdea(i) << std::endl;

	}
	std::cout << NONE << std::endl;

	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
	delete j;
	delete cat;
	delete evilAldo;
	delete evilCat;

	// Animal	*animalerror = new Animal();
}
