/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:41:39 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/10 10:55:12 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		void	makeSound(void) const;
		Brain	*getBrain();

		Dog();
		Dog(Dog &dog);
		~Dog();

		Dog &operator=(Dog &equals);
};

#endif