/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:54:06 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/30 12:54:22 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const **argv)
{
	Harl harl;
	
	if (argc < 2 || !argv[1][0])
	{
		std::cout << "Correct usage: ./harl <DEBUG|INFO|WARNING|ERROR>" << std::endl;
		return (0);
	}
	
	harl.complain(argv[1]);
	return 0;
}
