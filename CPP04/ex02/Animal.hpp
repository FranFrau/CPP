/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:27:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/10 12:48:10 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		void				setType(std::string animalType);
		virtual void		makeSound(void) const = 0;
		std::string			getType(void) const;

		Animal();
		Animal(Animal &animal);
		virtual ~Animal();
		Animal& operator=(Animal &equals);
};

#endif