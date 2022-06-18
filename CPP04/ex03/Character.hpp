/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:25:19 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 18:52:11 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string	name;
		AMateria*	materie[4];
	public:
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		std::string const & getName() const;
		
		Character();
		Character(Character& copy);
		Character(std::string const & name);
		~Character();
		
		Character&	operator=(Character& equals);
};