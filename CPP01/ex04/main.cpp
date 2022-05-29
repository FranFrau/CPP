/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:40:55 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 18:14:51 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4 && argv[1] && argv[2] && !argv[2][0] && argv[3])
	{
		std::cout << "Error: wrong arguments" << std::endl;
		return (1);
	}
	std::ifstream myfile;
	std::string filename;
	filename.append(argv[1]);
	std::string str1;
	str1.append(argv[2]);
	std::string str2;
	str2.append(argv[3]);
	myfile.open(filename);
	if (!myfile)
	{
		std::cout << "Unable to open file" << std::endl;
		exit (1);
	}
	std::ofstream outfile;
	char mychar;
	outfile.open(filename + ".replace");
	std::string mystring;
	size_t i = 0;
	size_t j = 0;
	while (myfile.good())
	{
		mychar = myfile.get();
		if (mychar == -1)
			break;
		mystring.push_back(mychar);
	}
	mystring += '\0';
	while (mystring[0] && mystring[j])
	{
		j = mystring.find(str1);
		if (j == std::string::npos)
			j = mystring.length();
		while (i < j)
		{
			if (mystring[i] != 0)
				outfile << mystring[i++];
			else
				break;
		}
		if (j == mystring.length())
			break;
		outfile << str2;
		mystring = mystring.substr(j + str1.length());
		j = 0;
		i = 0;
	}
	outfile.close();
	myfile.close();
}