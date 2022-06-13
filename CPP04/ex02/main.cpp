/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:47:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/10 16:10:49 by ffrau            ###   ########.fr       */
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
	Animal *dog = new Dog();
	Cat *cat = new Cat();
	WrongAnimal* evilAldo = new WrongAnimal();
	WrongAnimal* evilCat = new WrongCat();
	
	std::cout << RED << "**** Testing ****  " << NONE << std::endl;
	
	std::cout << GREEN << "**** Types ****  " << NONE << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	std::cout << GREEN << "**** Sounds ****  " << NONE << std::endl;
	cat->makeSound();
	dog->makeSound();
	evilAldo->makeSound();
	evilCat->makeSound();

	std::cout << GREEN << "**** Ideas ****  " << NONE << std::endl;
	cat->getBrain()->getIdea(1);

	std::cout << std::endl;

	std::cout << RED << "**** Destructor ****" << NONE << std::endl;
	delete dog;
	delete cat;
	delete evilAldo;
	delete evilCat;

	// Animal	*animalerror = new Animal();
}
