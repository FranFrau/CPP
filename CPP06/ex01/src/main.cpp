/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:09:48 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/21 13:13:49 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

int main()
{
	std::cout << GREEN << "**** Constructor ****" << NONE << std::endl << std::endl;
	Data*		data = new Data;
	uintptr_t	uint = serialize(data);
	Data		*data2 = deserialize(uint);

	std::cout << std::endl << CYAN << "**** Info ****  " << NONE << std::endl << std::endl;
	std::cout << data << std::endl;
	std::cout << uint << std::endl;
	std::cout << data2 << std::endl;

	std::cout << std::endl << CYAN << "**** Testing ****  " << NONE << std::endl << std::endl;
	std::cout << serialize(data) << std::endl;
	std::cout << deserialize(uint) << std::endl;
	std::cout << serialize(data2) << std::endl;
	return 0;
}
