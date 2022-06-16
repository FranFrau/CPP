/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 01:38:12 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest.txt", 72, 45)
{
	std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &equals)
{
	(void) equals;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
