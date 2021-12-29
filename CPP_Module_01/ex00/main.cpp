/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:12:45 by jludt             #+#    #+#             */
/*   Updated: 2021/12/07 18:24:58 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*onHeap = newZombie("ZombieOnHeap");

	onHeap->announce();
	randomChump("ZombieOnStack");
	delete onHeap;
	return (0);
}
