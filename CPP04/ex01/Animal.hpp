/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:27:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/09 21:37:56 by ffrau            ###   ########.fr       */
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
		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		virtual Brain		*getBrain();

		Animal();
		Animal(Animal &animal);
		virtual ~Animal();
		Animal& operator=(Animal &equals);
};

#endif