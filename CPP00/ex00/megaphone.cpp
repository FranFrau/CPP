/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:53:11 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/25 21:53:12 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(int argc, char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << (char)toupper(argv[i][j]);
			else
				std::cout << argv[i][j];
		}
		if (i != argc - 1)
			std::cout << " ";
	}
	
	// int j = 1;
	// while (argv[j])
	// {
	// 	int i = 0;
	// 	while (argv[j][i])
	// 	{
	// 		if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
	// 			std::cout << (char)toupper(argv[j][i]);
	// 		else
	// 			std::cout << argv[j][i];
	// 		i++;
	// 	}
	// 	if (j != argc - 1)
	// 		std::cout << " ";
	// 	j++;
	// }
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	megaphone(argc, argv);
	return (0);
}