/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:48:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 18:33:02 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_nideas = 0;
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string idea)
{
	if (this->_nideas == 100)
	{
		this->_nideas = 0;
		std::cout << "Your brain in full. I will replace your oldest idea with the newest" << std::endl;
	}
	this->_ideas[this->_nideas] = idea;
	this->_nideas++;
}

void	Brain::setIdea(std::string idea, unsigned int index)
{
	if (index > 100)
	{
		std::cout << "Your brain in so small. I will replace with the first one" << std::endl;
		index = 0;
	}
	this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	if (this->_ideas[index].empty())
	{
		std::cout << "Idea not found" << std::endl;
		return "";
	}
	return (this->_ideas[index]);
}

std::string	*Brain::getIdeas()
{
	return (this->_ideas);
}