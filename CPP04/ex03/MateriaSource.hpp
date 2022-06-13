/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:15:14 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:16:07 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materie[4];
	public:
		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);

		MateriaSource();
		MateriaSource(MateriaSource& copy);
		~MateriaSource();

		MateriaSource& operator= (MateriaSource& uguale);
};

#endif
