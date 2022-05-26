#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <cstring>
#include <cstdbool>


class PhoneBook
{
	private:
		int	_contactNbr;

	public:
		Contact	contact[8];
		void	addContact(PhoneBook *rubric);
		void	searchContact(PhoneBook *rubric);
		int		getContactNbr(void);
		void	addContactNbr(int value);
		void	setContactNbr(int value);
		void	printContact(PhoneBook *rubric);
		void	printFullContact(PhoneBook *rubric, int i);

		PhoneBook(void);
		~PhoneBook(void);
};
#endif