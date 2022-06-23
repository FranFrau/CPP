/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:11:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 18:25:55 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

template <typename T>
bool	easyfind(T first, int second)
{
	typename T::iterator it = std::find(first.begin(), first.end(), second);
	if (it == first.end())
		return (false);
	return(true);
}