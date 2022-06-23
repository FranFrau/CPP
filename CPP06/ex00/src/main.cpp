/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:35:21 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 16:58:57 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

bool ft_control(std::string s)
{
	if (s == "nan" || s == "+nan" || s == "-nan" || s == "nanf" || s == "+nanf" || s == "-nanf" ||
		s == "inf" || s == "+inf" || s == "-inf" || s == "inff" || s == "+inff" || s == "-inff")
		return 1;
	return 0;
}

void		convert_int(double n, std::string s)
{
	if (n > 2147483647  || n < -2147483648 || ft_control(s))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;
}

void		convert_char(double n, std::string s)
{
	if (n < 0 || n > 127 || ft_control(s))
		std::cout << "char: impossible" << std::endl;
	else if (n > 32 && n < 127)
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	convert_int(n, s);
}

bool ft_check(std::string s)
{
	int j = s.length();
	int dot =  0;
	if ((s[0] >= '0' && s[0] <= '9') || ((s[0] == '-'  ||  s[0] == '+') && isdigit(s[1])))
	{
		for (int i = 1; i < j; i++)
		{
			if (s[i] == '.')
				dot++;
			if (i == j - 1 && s[i] == 'f')
				return (true);
			if (dot > 1 || isalpha(s[i]))
				return (false);
		}
		
	}
	else
		return(ft_control(s));
	return (true);
}
int			main(int ac, char **av)
{
	std::string	s;
	double		n;

	if (ac != 2)
	{
		std::cout << RED << "Usage: ./convert [string]" << NONE << std::endl;
		return (1);
	}
	s = av[1];
	if(!ft_check(s))
	{
		std::cout <<  RED << "error: wrong argument" << NONE << std::endl;
		return (1);
	}
	n = (!isdigit(s[0]) && s.length() == 1) ? static_cast<int>(s[0]) : atof(av[1]);
	convert_char(n, s);
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << std::endl;
	return 0;
}