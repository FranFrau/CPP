/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:42:53 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 18:22:43 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	private:
		int			_nideas;
		std::string	_ideas[100];
	public:
		void		setIdea(std::string idea, unsigned int index);
		void		setIdeas(std::string idea);
		std::string	getIdea(int index);
		std::string	*getIdeas();

		Brain();
		Brain(Brain &brain);
		virtual ~Brain();
		Brain	&operator=(Brain &brain);
};

#endif