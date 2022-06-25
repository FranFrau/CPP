/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:24:58 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/25 00:05:51 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

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
	
	std::cout << CYAN << "Test int array function" << NONE << std::endl;
	std::cout << YELLOW << "int array[] = {3, 9, 0, 10};" << NONE << std::endl;
	iter(array, 4, print);
	std::cout << GREEN << "OK" << NONE << std::endl << std::endl;

	std::cout << CYAN << "Test double array function" << NONE << std::endl;
	std::cout << YELLOW << "double array0[] = {3.1415, 9.9999, 0.0001, 10.0/7.0};" << NONE << std::endl;
	iter(array0, 4, print);
	std::cout << GREEN << "OK" << NONE << std::endl << std::endl;

	std::cout << CYAN << "Test string array function" << NONE << std::endl;
	std::cout << YELLOW << "std::string array1[] = {\"hello\", \"this\", \"is\", \"working\"};" << NONE << std::endl;
	iter(array1, 4, print);
	std::cout << GREEN << "OK" << NONE << std::endl << std::endl;

	std::cout << CYAN << "Test char array function" << NONE << std::endl;
	std::cout << YELLOW << "char array2[] = {'a', 'b', 'c', 'd'};" << NONE << std::endl;
	iter(array2, 4, print);
	std::cout << GREEN << "OK" << NONE << std::endl;
}

// int main() {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }