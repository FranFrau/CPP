/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:56:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 15:18:14 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
	public:
		bool	execute(Bureaucrat const & executor) const;

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &copy);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm &equals);
};

std::ostream& operator<<(std::ostream& out, Form& bur);

#endif