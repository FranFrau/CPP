/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:57:04 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/26 20:24:33 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int	PhoneBook::getContactNbr(void)
{
	return PhoneBook::_contactNbr;
}

void	PhoneBook::addContactNbr(int value)
{
	PhoneBook::_contactNbr += value;
}

void	PhoneBook::setContactNbr(int value)
{
	PhoneBook::_contactNbr = value;
}

void	truncate(std::string str, int maxSize)
{
	int	size;

	size = str.length() - 1;
	while (++size < maxSize)
		std::cout<<" ";
	if (size > maxSize)
	{
		str.resize(9);
		str.append(".");
	}
	std::cout<<str;
}

bool	isValid(PhoneBook *rubric, int i)
{
	if (i == 8)
		return (false);
	if (rubric->contact[i].getFirstName().empty())
		return (false);
	if (rubric->contact[i].getLastName().empty())
		return (false);
	if (rubric->contact[i].getNickname().empty())
		return (false);
	if (rubric->contact[i].getNumber().empty())
		return (false);
	for (int i = 0; rubric->contact[i].getNumber()[i]; i++)
		if (!isdigit(rubric->contact[i].getNumber()[i]))
			return (false);
	if (rubric->contact[i].getSecret().empty())
		return (false);
	return (true);
}

void	PhoneBook::printContact(PhoneBook *rubric)
{
	std::string	line;

	std::cout << "|    index|first name| last name|  nickname" << std::endl;
	std::cout << "|---------|----------|----------|----------|" << std::endl;
	for (int i = 0; isValid(rubric, i); i++)
	{
		std::cout << "|        " << i + 1 << "|";
		truncate(rubric->contact[i].getFirstName(), 10);
		std::cout << "|";
		truncate(rubric->contact[i].getLastName(), 10);
		std::cout << "|";
		truncate(rubric->contact[i].getNickname(), 10);
		std::cout << "|" << std::endl;
	}
	std::cout<<"Insert the index of the contact you want to see : ";
	std::getline(std::cin, line);
	if (line.empty() || (line[0] < '1' || line[0] > '8'))
		return;
	printFullContact(rubric, line[0] - '1');
}

void	PhoneBook::printFullContact(PhoneBook *rubric, int i)
{
	if (rubric->contact[i].getFirstName().empty())
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	std::cout << "First name: " << rubric->contact[i].getFirstName() << std::endl;
	std::cout << "Last name: " << rubric->contact[i].getLastName() << std::endl;
	std::cout << "Nickname: " << rubric->contact[i].getNickname() << std::endl;
	std::cout << "Number: " << rubric->contact[i].getNumber() << std::endl;
	std::cout << "Secret: " << rubric->contact[i].getSecret() << std::endl;
}

void	PhoneBook::addContact(PhoneBook *rubric)
{
	std::string _name;
	std::string _last;
	std::string _nick;
	std::string _number;
	std::string _secret;
	
	if (getContactNbr() == 8)
	{
		std::cout << "You have reached the maximum number of contacts, i will replace the oldest" << std::endl;
		setContactNbr(0);
	}
	std::cout << "First Name: \t";
	std::getline(std::cin, _name);
	if (_name.empty()){
		std::cout << "Error: First name is empty" << std::endl;
		return;
	}
	std::cout << "Last Name: \t";
	std::getline(std::cin, _last);
	if (_last.empty()){
		std::cout << "Error: Last name is empty" << std::endl;
		return;
	}
	std::cout << "Nickame: \t";
	std::getline(std::cin, _nick);
	if (_nick.empty()){
		std::cout << "Error: Nickname is empty" << std::endl;
		return;
	}
	std::cout << "Number: \t";
	std::getline(std::cin, _number);
	if (_number.empty()){
		std::cout << "Error: Number is empty" << std::endl;
		return;
	}
	for (int i = 0; _number[i]; i++)
		if (!isdigit(_number[i]))
		{
			std::cout << "Error: Number is not a digit" << std::endl;
			return ;
		}
	std::cout << "Secret: \t";
	std::getline(std::cin, _secret);
	if (_secret.empty()){
		std::cout << "Error: Secret is empty" << std::endl;
		return;
	}
	rubric->contact[getContactNbr()].firstName = _name;
	rubric->contact[getContactNbr()].lastName = _last;
	rubric->contact[getContactNbr()].nickname = _nick;
	rubric->contact[getContactNbr()].number = _number;
	rubric->contact[getContactNbr()].secret = _secret;
	std::cout << "Contact added" << std::endl;
	addContactNbr(1);
}