/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:31:17 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/18 20:13:26 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("ppunzo.txt"), _signed(false), _gradeRequireToSign(1), _gradeRequireToExecute(1)
{
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeRequireToSign(gradeToSign), _gradeRequireToExecute(gradeToExecute)
{
	if (this->_gradeRequireToSign > MIN_GRADE || _gradeRequireToExecute > MIN_GRADE)
		throw GradeTooLowException();
	if (this->_gradeRequireToSign < MAX_GRADE || this->_gradeRequireToExecute < MAX_GRADE)
		throw GradeTooHighException();
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(Form &copy) : _gradeRequireToSign(1), _gradeRequireToExecute(1)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

Form &Form::operator=(Form &equals)
{
	this->_signed = equals._signed;

	std::string* newName = const_cast <std::string*> (&this->_name);
	*newName = equals._name;

	int* grts = const_cast <int*> (&this->_gradeRequireToSign);
	*grts = equals._gradeRequireToSign;
	
	int* grte = const_cast <int*> (&this->_gradeRequireToExecute);
	*grte = equals._gradeRequireToExecute;
	
	return (*this);
}

std::string	Form::getName()
{
	return (this->_name);
}

int	Form::getGradeRequiredToSign() const
{
	return (this->_gradeRequireToSign);
}

int	Form::getGradeRequiredToExecute() const
{
	return (this->_gradeRequireToExecute);
}

bool	Form::isSigned() const
{
	return (this->_signed);
}

void	Form::setSigned( bool sig ) 
{
	this->_signed = sig;
}

void	Form::beSigned( Bureaucrat &bb ) 
{
	try
	{
		if (bb.getGrade() > this->getGradeRequiredToSign())
			throw GradeTooLowException();
		try
		{
			if (this->isSigned())
				throw FormAlreadySignedException();
			this->setSigned(true);
			std::cout << bb.getName() << " signed " << this->getName() << std::endl;
		}
		catch(const FormAlreadySignedException &ex)
		{
			std::cout << this->getName() << ex.what() << std::endl;
			return;
		}
	}
	catch(GradeTooLowException &e)
	{
		std::cout << bb.getName() << " couldn't sign " << this->getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream& out, Form& bur)
{
	// return (out << "Name: " << bur.getName() << ", signed: " << bur.isSigned()  << ", GradeRequiredToSign: " << bur.getGradeRequiredToSign() <<  ", GradeRequiredToExecute: " << bur.getGradeRequiredToExecute() << std::endl);
	return (out << "Form info:" << std::endl 
				<< "Name: " << bur.getName() << std::endl 
				<< "Signed: " << (bur.isSigned() ? "true" : "false") << std::endl
				<< "Grade required to sign: " << bur.getGradeRequiredToSign() << std::endl
				<< "Grade required to execute: " << bur.getGradeRequiredToExecute() << std::endl);
}
