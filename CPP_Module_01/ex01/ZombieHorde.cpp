/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:21:06 by jludt             #+#    #+#             */
/*   Updated: 2021/12/08 11:02:55 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	
	Zombie *newHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		newHorde[i].setName(name);

	return (newHorde);
} 