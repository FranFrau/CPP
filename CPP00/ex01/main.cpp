#include "phonebook.hpp"

std::string toUpperString(std::string str)
{
	std::string output;
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			output += toupper(str[i]);
		else
			output += str[i];
	}
	return (output);
}

int main(int argc, char const **argv)
{
	PhoneBook	rubric;
	std::string	input = "INIT";

	while (input.compare("EXIT"))
	{
		// input = "INIT";
		std::cout << "Enter your command: ";
		std::getline(std::cin, input);
		input = toUpperString(input);
		if (!input.compare("ADD")){
			std::cout<< "ADD" << std::endl;
			rubric.addContact(&rubric);
			// PhoneBook::addContact(&rubric);
		}
		if (!input.compare("SEARCH")){
			std::cout<< "SEARCH" << std::endl;
			rubric.printContact(&rubric);
			// PhoneBook::printContact(&rubric);
		}
	}
	std::cout << "Fuori while" << std::endl;
	return 0;
}
