/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:45:43 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/19 13:14:28 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat &cat)
{
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &equals)
{
	this->type = equals.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}