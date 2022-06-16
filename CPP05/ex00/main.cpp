#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a;
	Bureaucrat b;
	Bureaucrat c;
	Bureaucrat d;

	std::cout << GREEN << "**** Constructor ****" << NONE << std::endl << std::endl;
	try
	{
		Bureaucrat Luca("Luca", 150);
		a = Luca;
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
	try
	{
		Bureaucrat Antonio("Antonio", -80);
		c = Antonio;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Federico("Federico", 180);
		d = Federico;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;

	std::cout << a;
	std::cout << b;
	// std::cout << c;
	// std::cout << d;
	for (int i = 0; i < 150; i++)
		a.addGrade();
	for (int i = 0; i < 150; i++)
		b.removeGrade();
	
	std::cout << a;
	std::cout << b;
	std::cout << std::endl << RED << "**** Destructor ****" << NONE << std::endl << std::endl;
	return 0;
}

