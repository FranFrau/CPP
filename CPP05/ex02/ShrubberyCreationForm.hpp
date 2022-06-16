/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:56:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 01:32:16 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		void	execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm &equals);
};

std::ostream& operator<<(std::ostream& out, Form& bur);

#endif