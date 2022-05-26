#include "phonebook.hpp"

std::string toUpperString(std::string str)
{
	std::string output;
	int			str_size;

	str_size = (int) str.length();
	for (int i = 0; i < str_size; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			output += toupper(str[i]);
		else
			output += str[i];
	}
	return (output);
}

int main(void)
{
	PhoneBook	rubric;
	std::string	input;// = "INIT";

	while (input.compare("EXIT"))
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, input);
		input = toUpperString(input);
		if (!input.compare("ADD"))
			rubric.addContact(&rubric);
		if (!input.compare("SEARCH"))
			rubric.printContact(&rubric);
	}
	return 0;
}
