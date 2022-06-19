/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:13:59 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/19 13:16:55 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool	endWith(std::string string, std::string end)
{
	int lengt = end.length() - 1;
	int strLengt = string.length() - 1;

	while ((lengt + 1))
	{
		if (string[strLengt] != end[lengt])
			return (false);
		lengt--;
		strLengt--;
	}
	return (true);
}

void	oneChar(std::string input)
{
	char c = static_cast <char>(input[0]);
	int i = static_cast <int>(c);
	std::cout << "Char: ";
	isdigit(i) ? std::cout << " Not printable" << std::endl : std::cout << " " << c << std::endl;
	std::cout << "Int: " << i << std::endl;
	std::cout << "Float: " << i << ".0f" << std::endl;
	std::cout << "Double: " << i << ".0" << std::endl;
	exit(0);
}

void	doubleConverter(std::string input)
{
	std::string pre;
	std::string post;
}

void	floatConverter(std::string input)
{
	input.pop_back();

	char char_array[input.length() + 1];
	strcpy(char_array, input.c_str());

	std::cout << input << std::endl;
	exit(0);
}

int main(int argc, char **argv)
{
	std::string input;
	if (argc != 2)
	{
		std::cout << "Usa due variabili cogliò" << std::endl;
		return 0;
	}

	input = std::string(argv[1]);
	if (input.length() == 1)
		oneChar(input);
	if (endWith(input, "f"))
		floatConverter(input);
	
	// char b = input.length() != 1 ? 'a' : static_cast <char>(input[0]);
	// int a = static_cast <int>(b);

	// std::cout << "input " << input << " b " << input.length() << std::endl;
	return 0;
}
