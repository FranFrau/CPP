/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:36:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/19 14:53:28 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructed" << std::endl;
}

Intern::Intern(Intern &copy)
{
	*this = copy;
	std::cout << "Intern copy constructed" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
}

Intern &Intern::operator=(Intern &equals)
{
	(void) equals;
	return (*this);
}

Form	*Intern::makePresidentialPardonForm(std::string target){
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	int		i = 0;
	Form	*form;
	
	std::string targetArray[] = {"presidential request", "robotomy request", "shrubbery request"};

	for (i = 0; i < 3; i++)
	{
		if (name == targetArray[i])
			break;
	}
	switch (i)
	{
		case 0:
			form = this->makePresidentialPardonForm(target);
			break;
		case 1:
			form = this->makeRobotomyRequestForm(target);
			break;
		case 2:
			form = this->makeShrubberyCreationForm(target);
			break;
		default:
			std::cout << "Wrong args. Kojò. The form name passed as parameter doesn’t exist" << std::endl;
			return NULL;
			break;
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}