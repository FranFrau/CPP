/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:56:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 01:42:00 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		int	_target;
	public:
		void	execute(Bureaucrat const & executor) const;

		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm &equals);
};

std::ostream& operator<<(std::ostream& out, Form& bur);

#endif