/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:45:43 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/09 16:36:46 by ffrau            ###   ########.fr       */
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
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
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

// void	Dog::setIdeas(std::string idea)
// {
// 	this->_brain->setIdeas(idea);
// }

// std::string	Dog::getIdea(int index)
// {
// 	return (this->_brain->getIdea(index));
// }

// std::string	*Dog::getIdeas()
// {
// 	return (this->_brain->getIdeas());
// }

Brain	*Dog::getBrain()
{
	return (this->_brain);
}