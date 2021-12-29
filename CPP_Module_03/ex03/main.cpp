/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:28:45 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:43:10 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a;
	DiamondTrap b("AAA");

	b.attack("bliblablub!");
	b.takeDamage(42);
	b.beRepaired(21);
	b.highFivesGuys();
	b.guardGate();
	b.whoAmI();

	return (0);
}