/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:22:57 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/16 20:48:25 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeRequireToSign;
		const int			_gradeRequireToExecute;
	public:
		std::string	getName();
		bool		isSigned() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredToExecute() const; 
		void		setSigned(bool sign);
		void		beSigned(Bureaucrat &bb);
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Grade too high gg";
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Grade too low gg";
				}
		};
		class FormAlreadySignedException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return " is alreay signed";
				}
		};
		
		Form();
		Form(Form &copy);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		~Form();

		Form &operator=(Form &equals);
};

std::ostream& operator<<(std::ostream& out, Form& bur);

#endif