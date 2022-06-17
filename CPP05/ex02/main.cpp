#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat				a;
	Bureaucrat				b;
	Bureaucrat				c;
	
	ShrubberyCreationForm	e;
	RobotomyRequestForm		f;
	PresidentialPardonForm	g;

	std::cout << GREEN << "**** Constructor ****" << NONE << std::endl << std::endl;
	try
	{
		Bureaucrat Luca("Luca", 1);
		a = Luca;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Aldo("Aldo", 150);
		c = Aldo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Francesco("Francesco", 43);
		b = Francesco;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << CYAN << "**** Info ****  " << NONE << std::endl << std::endl;

	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl;
	std::cout << e;
	std::cout << std::endl;
	std::cout << f;
	std::cout << std::endl;
	std::cout << g;
	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;

	b.executeForm(e);
	std::cout << std::endl;
	a.signForm(e);
	b.signForm(e);
	c.signForm(e);
	std::cout << std::endl;
	a.executeForm(e);
	b.executeForm(e);
	std::cout << std::endl;
	a.executeForm(f);
	std::cout << std::endl;
	c.signForm(f);
	a.signForm(f);
	b.signForm(f);
	std::cout << std::endl;
	a.executeForm(f);
	b.executeForm(f);
	std::cout << std::endl;
	b.executeForm(g);
	std::cout << std::endl;
	c.signForm(g);
	a.signForm(g);
	b.signForm(g);
	std::cout << std::endl;
	a.executeForm(g);
	b.executeForm(g);
	std::cout << std::endl;

	std::cout << std::endl << RED << "**** Destructor ****" << NONE << std::endl << std::endl;
	// delete *z;
	// delete *f;
	return 0;
}


// int main()
// {
// 	Bureaucrat pasquale("Pasquale", 145);
// 	Bureaucrat paolo("Paolo", 40);
// 	Bureaucrat ppunzo("Ppunzo", 1);
// 	std::cout << pasquale << paolo << ppunzo;

	
// 	pasquale.signForm(a);
// 	std::cout << a;
// 	pasquale.executeForm(a);
// 	while (pasquale.getGrade() != a.getGradeRequiredToExecute())
// 		pasquale.addGrade();
// 	pasquale.executeForm(a);
// 	std::cout << b;
// 	paolo.signForm(b);
// 	paolo.executeForm(b);
// 	ppunzo.executeForm(c);
// 	std::cout << c;
// 	ppunzo.signForm(c);
// 	ppunzo.executeForm(c);
// }
	