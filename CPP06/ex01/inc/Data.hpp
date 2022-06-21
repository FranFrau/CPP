/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:05:39 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/21 13:10:53 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

class Data
{
	private:
		
	public:
		Data();
		Data(Data &copy);
		~Data();

		Data &operator=(Data &equals);
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif