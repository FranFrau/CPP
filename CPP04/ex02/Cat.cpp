/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:45:43 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 22:35:27 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &cat)
{
	*this = cat;
	this->_brain = new Brain(*cat.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete[] this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &equals)
{
	this->type = equals.type;
	this->_brain = equals._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (this->_brain);
}

void	Cat::setIdeas(std::string idea)
{
	return (this->_brain->setIdeas(idea));
}

void	Cat::setIdea(std::string idea, unsigned int index)
{
	return (this->_brain->setIdea(idea, index));
}

std::string	Cat::getIdea(int index)
{
	return (this->_brain->getIdea(index));
}

std::string	*Cat::getIdeas()
{
	return (this->_brain->getIdeas());
}
