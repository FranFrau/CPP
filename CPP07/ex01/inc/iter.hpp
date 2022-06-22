/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:18:37 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/22 15:46:18 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T* address, int lenght, void (*f)(T&))
{
	for (int i = 0; i < lenght; i++)
		f(address[i]);
}

#endif