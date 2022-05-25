#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string.h>
#include <iostream>

class   contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
		std::string	ft_get_first_name();
		std::string	ft_get_last_name();
		std::string	ft_get_nickname();
		std::string	ft_get_number();
		std::string	ft_get_secret();

	void ft_new_info();
	void ft_display_info();
};

#endif