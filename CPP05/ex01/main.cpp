#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	a;
	Bureaucrat	b;
	Bureaucrat	c;
	Form		z;
	Form		f("dichiarazione d'indipendenza", 140, 1);

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
		Bureaucrat Aldo("Aldo", 100);
		c = Aldo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Francesco("Francesco", 1);
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
	std::cout << z;
	std::cout << std::endl;
	std::cout << f;
	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;
	a.signForm(z);
	b.signForm(z);
	c.signForm(z);
	std::cout << std::endl;
	c.signForm(f);
	a.signForm(f);
	b.signForm(f);
	std::cout << std::endl << CYAN << "**** info after testing ****  " << NONE << std::endl << std::endl;
	std::cout << z;
	std::cout << std::endl;
	std::cout << f;
	std::cout << std::endl << RED << "**** Destructor ****" << NONE << std::endl << std::endl;
	return 0;
}

