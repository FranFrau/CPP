/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:16:18 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 11:31:04 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie first;
	Zombie second;
	Zombie *stack;

	first.announce();
	second.setName("Antonio");
	second.announce();
	stack = newZombie("Brian");
	stack->announce();
	randomChump("Marvin");
	delete(stack);
	return 0;
}
