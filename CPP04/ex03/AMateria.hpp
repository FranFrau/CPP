/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:33:42 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:19:33 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		std::string const & getType() const;
		void				setType(std::string type);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		AMateria();
		AMateria(AMateria &copy);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(AMateria &equals);
};

#endif