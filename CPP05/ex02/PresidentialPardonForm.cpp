/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 15:19:35 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential.txt", 25, 5)
{
	this->_target = "ppunzo";
	std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential.txt", 25, 5)
{
	this->_target = target;
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
	this->_target = equals._target;
	return (*this);
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
		return (false);
	}
	catch(const GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
		return (false);
	}
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}
