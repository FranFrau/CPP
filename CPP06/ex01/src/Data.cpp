/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:05:42 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/21 13:09:22 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

Data::Data()
{
	std::cout << "Data constructed" << std::endl;
}

Data::Data(Data &copy)
{
	*(this) = copy;
	std::cout << "Data copy constructor" << std::endl;
}

Data::~Data()
{
	std::cout << "Data destructed" << std::endl;
}

Data &Data::operator=(Data &equals)
{
	(void) equals;
	std::cout << "Data assignment operator" << std::endl;
	return (*this);
}

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}