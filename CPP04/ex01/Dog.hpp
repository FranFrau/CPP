/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:41:39 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 18:34:31 by ffrau            ###   ########.fr       */
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
		void		makeSound(void) const;
		void		setIdea(std::string idea, unsigned int index);
		void		setIdeas(std::string idea);
		std::string	getIdea(int index);
		std::string	*getIdeas();
		Brain		*getBrain();

		Dog();
		Dog(Dog &dog);
		~Dog();

		Dog &operator=(Dog &equals);
};

#endif