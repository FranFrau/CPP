/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:27:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/08 12:37:29 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		void			setType(std::string wrongAnimalType);

		WrongAnimal();
		WrongAnimal(WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal &equals);
};

#endif