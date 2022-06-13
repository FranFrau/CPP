/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:35:28 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 14:35:50 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure*	clone() const;
		void	use(ICharacter& target);

		Cure();
		Cure(Cure &copy);
		~Cure();

		Cure &operator=(Cure &equals);
};

#endif