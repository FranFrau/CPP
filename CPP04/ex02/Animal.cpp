/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:32:49 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/08 12:22:23 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal &equals)
{
	this->type = equals.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string animalType)
{
	this->type = animalType;
}

void	Animal::makeSound(void) const
{
	std::cout << "Ragazzi, aprite le finestre" << std::endl;
}