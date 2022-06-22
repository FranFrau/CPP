/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 13:18:37 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/22 15:15:50 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void	swap(T &first, T &second)
{
	T temp = first;
	first = second;
	second = temp;
}

template <typename T> T min(T first, T second)
{
	return (first < second ? first : second);
}

template <typename T> T max(T first, T second)
{
	return (first > second ? first : second);
}

#endif