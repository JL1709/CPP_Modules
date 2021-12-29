/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:28:45 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:30:06 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a;
	FragTrap	b("BBB");

	b.attack("ClapTrap");
	b.takeDamage(10);
	b.beRepaired(5);
	b.highFivesGuys();

	return (0);
}