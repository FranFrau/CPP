/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:33:42 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/11 15:33:43 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string _type;
	public:
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);

		AMateria();
		AMateria(AMateria &copy);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(AMateria &equals);
};

#endif