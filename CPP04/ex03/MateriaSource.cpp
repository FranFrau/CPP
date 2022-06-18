/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:16:25 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 19:02:22 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		materie[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	// for (int i = 0; i < 4; i++)
	// 	delete materie[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator= (MateriaSource& uguale)
{
	for (int i = 0; i < 4; i++)
	{
		if (materie[i])
		{
			delete materie[i];
			materie[i] = NULL;
		}
		materie[i] = uguale.materie[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(!materie[i])
		{
			materie[i] = materia->clone();
			std::cout << "Materia " + materia->getType() + " has been learned at index: " << i << std::endl;
			if (materia)
				delete materia;
			return;
		}
	}
	if (materia)
		delete materia;
	std::cout << "Full slots" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if(materie[i] && materie[i]->getType() == type)
				return (materie[i]);
	return nullptr;
}