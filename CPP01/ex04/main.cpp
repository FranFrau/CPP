/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:40:55 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/30 10:11:19 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::ofstream outfile;
	std::ifstream file;
	std::string streplace;
	std::string mystring;
	std::string filename;
	std::string str;
	size_t i = 0;
	size_t j = 0;
	char mychar;
	
	if (argc != 4 || (argv[1] && argv[2] && !argv[2][0] && argv[3]))
	{
		std::cout << "Error: wrong arguments. Use ./replace <fileName> <stringReplaced> <stringToReplace>" << std::endl;
		return (1);
	}
	filename.append(argv[1]);
	file.open(filename);
	str.append(argv[2]);
	streplace.append(argv[3]);
	if (!file)
	{
		std::cout << "Error: no such file or directory" << std::endl;
		exit (1);
	}
	outfile.open(filename + ".replace");
	while (file.good())
	{
		mychar = file.get();
		if (mychar == -1)
			break;
		mystring.push_back(mychar);
	}
	mystring += '\0';
	while (mystring[0] && mystring[j])
	{
		j = mystring.find(str);
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
		outfile << streplace;
		mystring = mystring.substr(j + str.length());
		j = 0;
		i = 0;
	}
	outfile.close();
	file.close();
}
