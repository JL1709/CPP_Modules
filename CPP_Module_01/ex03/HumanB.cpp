/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:33:48 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 09:31:11 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {}

void	HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with this " << _weapon->getType() << std::endl;
}