/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:27:14 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:24:19 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < 4; i++)
		materie[i] = NULL;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string const & name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		materie[i] = NULL;
	std::cout << "Name Character constructor called" << std::endl;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (materie[i])
			delete materie[i];
	std::cout << "Character destructor called" <<std::endl;
}

Character::Character(Character& copy)
{
	*this = copy;
	this->name = copy.getName();
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(Character& equals)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->materie[i])
		{
			delete this->materie[i];
			this->materie[i] = NULL;
		}
		if (equals.materie[i])
			this->materie[i] = equals.materie[i]->clone();
	}
	name.assign(equals.getName());
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::use(int i, ICharacter& target)
{
	if (materie[i])
		materie[i]->use(target);
	else
		std::cout << "Materia doesn't exist" << std::endl;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
		if (materie[i] == NULL)
		{
			std::cout << m->getType() << " equipped at index " << i << std::endl;
			materie[i] = m->clone();
			return ;
		}
}

void Character::unequip(int i)
{
	std::cout << materie[i]->getType() << " unequipped at index " << i << std::endl;
	materie[i] = NULL;
}