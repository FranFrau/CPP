/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:01:27 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 15:18:51 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm.txt", 145, 137)
{
	this->_target = "ppunzo";
	std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm.txt", 145, 137)
{
	this->_target = target;
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
	this->_target = equals._target;
	return (*this);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->isSigned())
			throw FormNotSignedException();
		if (executor.getGrade() > this->getGradeRequiredToExecute())
			throw GradeTooLowException();
		std::ofstream myfile(_target + "_shrubbery");
			myfile
			<< "          &&& &&  & &&" << std::endl
			<< "      && &\\/&\\|& ()|/ @, &&" << std::endl
			<< "      &\\/(/&/&||/& /_/)_&/_&" << std::endl
			<< "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl
			<< "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl
			<< "&&   && & &| &| /& & % ()& /&&" << std::endl
			<< " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl
			<< "     &&     \\|||" << std::endl
			<< "             |||" << std::endl
			<< "             |||" << std::endl
			<< "             |||" << std::endl
			<< "       , -=-~  .-^- _" << std::endl
			<< "              `" << std::endl;
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
	return (true);
}












