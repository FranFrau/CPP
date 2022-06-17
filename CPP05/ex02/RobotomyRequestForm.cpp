/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 15:19:26 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm.txt", 72, 45)
{
	this->_target = "ppunzo";
	std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm.txt", 72, 45)
{
	this->_target = target;
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
	this->_target = equals._target;
	return (*this);
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	std::cout << "DRILLLLLLLLL" << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
	std::cout << "robotomy failed DRILLLLLLLLL" << std::endl;
	return (true);
}
