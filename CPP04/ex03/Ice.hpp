/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:12:52 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 14:34:11 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice*	clone() const;
		void	use(ICharacter& target);

		Ice();
		Ice(Ice &copy);
		~Ice();

		Ice &operator=(Ice &equals);
};

#endif