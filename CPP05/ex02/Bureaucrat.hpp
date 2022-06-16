/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:12:52 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/16 21:53:05 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		std::string	getName() const;
		int			getGrade() const;
		void		addGrade();
		void		removeGrade();
		void		signForm(Form &f);
		void		executeForm(Form & form) const;

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Grade too low";
				}
		};

		Bureaucrat();
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat &equals);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bur);

#endif