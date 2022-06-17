/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:13:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/17 15:20:54 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("ppunzo"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade > MIN_GRADE)
		throw GradeTooLowException();
	if (this->_grade < MAX_GRADE)
		throw GradeTooHighException();
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &equals)
{
	this->_grade = equals._grade;
	std::string* newName = const_cast <std::string*> (&this->_name);
	*newName = equals._name;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::addGrade()
{
	try
	{
		if (this->getGrade() <= MAX_GRADE)
			throw GradeTooHighException();
	}
	catch(GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	this->_grade--;
}

void	Bureaucrat::removeGrade()
{
	try
	{
		if (this->getGrade() >= MIN_GRADE)
			throw GradeTooLowException();
	}
	catch(GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	this->_grade++;
}

void	Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
}

void	Bureaucrat::executeForm(Form & form) const
{
	if (form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bur)
{
	return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl);
}
