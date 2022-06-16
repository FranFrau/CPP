/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 01:37:55 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation.txt", 157, 137)
{
	std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &equals)
{
	(void) equals;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
