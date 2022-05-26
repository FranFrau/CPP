#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string.h>
#include <iostream>

class	Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	number;
		std::string	secret;
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();

		Contact();
		~Contact();
};

#endif