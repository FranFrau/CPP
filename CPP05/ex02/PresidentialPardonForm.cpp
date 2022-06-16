/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 01:39:22 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential.txt", 25, 5)
{
	std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &equals)
{
	(void) equals;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->isSigned())
			throw FormNotSignedException();
		if (executor.getGrade() > this->getGradeRequiredToExecute())
			throw GradeTooLowException();
	}
	catch(const FormNotSignedException &e)
	{
		std::cout << this->getName() << e.what() << std::endl;
	}
	catch(const GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
