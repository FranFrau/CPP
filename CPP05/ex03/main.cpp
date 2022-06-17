#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	b;
	Intern		someRandomIntern;
	Form		*rrf;
	Form		*rra;
	Form		*rrb;
	Form		*rrc;

	std::cout << GREEN << "**** Constructor ****" << NONE << std::endl << std::endl;

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

	std::cout << b << std::endl;

	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rra = someRandomIntern.makeForm("presidential request", "Fry");
	rrb = someRandomIntern.makeForm("shrubbery request", "Lela");
	rrc = someRandomIntern.makeForm("ppunzo request", "Zoiberg");
	std::cout << rrf->getName() << std::endl;
	b.signForm(*rrf);
	b.signForm(*rra);
	b.signForm(*rrb);

	b.executeForm(*rrf);
	b.executeForm(*rra);
	b.executeForm(*rrb);
	std::cout << std::endl << RED << "**** Destructor ****" << NONE << std::endl << std::endl;
	// delete *z;
	delete rrf;
	delete rra;
	delete rrb;
	delete rrc;
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
	