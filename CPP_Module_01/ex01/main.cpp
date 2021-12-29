/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:12:45 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 09:15:16 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 7;
	Zombie	*hordeOnHeap = zombieHorde(N, "horde");
	if (!hordeOnHeap)
		return (1);
	for (int i = 0; i < N; i++)
		hordeOnHeap->announce();
	delete [] hordeOnHeap;
	return (0);
}
