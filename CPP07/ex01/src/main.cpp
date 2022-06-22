/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:24:58 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/22 15:52:25 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

template <typename T>
void print(T& t)
{
	std::cout << t << std::endl;
	return;
}

int main()
{
	int array[] = {3, 9, 0, 10};
	double array0[] = {3.1415, 9.9999, 0.0001, 10.0/7.0};
	std::string array1[] = {"hello", "this", "is", "working"};
	char array2[] = {'a', 'b', 'c', 'd'};

	iter(array, 3, print);
	std::cout << std::endl;
	iter(array0, 4, print);
	std::cout << std::endl;
	iter(array1, 4, print);
	std::cout << std::endl;
	iter(array2, 4, print);
}