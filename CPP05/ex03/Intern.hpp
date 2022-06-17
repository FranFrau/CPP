/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:31:54 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 19:15:44 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		
	public:
		Form	*makeForm(std::string name, std::string target);
		Form	*makeShrubberyCreationForm(std::string target);
		Form	*makePresidentialPardonForm(std::string target);
		Form	*makeRobotomyRequestForm(std::string target);
		
		Intern();
		Intern(Intern &copy);
		~Intern();

		Intern &operator=(Intern &equals);
};

std::ostream& operator<<(std::ostream& out, Intern& bur);

#endif