/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:45:43 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 22:35:00 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog &dog)
{
	*this = dog;
	this->_brain = new Brain(*dog.getBrain());
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete[] this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &equals)
{
	this->type = equals.type;
	this->_brain = equals._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof" << std::endl;
}

Brain	*Dog::getBrain()
{
	return (this->_brain);
}


void	Dog::setIdeas(std::string idea)
{
	return (this->_brain->setIdeas(idea));
}

void	Dog::setIdea(std::string idea, unsigned int index)
{
	return (this->_brain->setIdea(idea, index));
}

std::string	Dog::getIdea(int index)
{
	return (this->_brain->getIdea(index));
}

std::string	*Dog::getIdeas()
{
	return (this->_brain->getIdeas());
}
