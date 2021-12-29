/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:50:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 09:54:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
# include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap(), _name("noName")
{ 
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Default constructor called from class DiamondTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Parameterized constructor called from class DiamondTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
	std::cout << "Copy constructor called from class DiamondTrap" << std::endl << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called from class DiamondTrap" << std::endl;
	std::cout <<  _name << " got destoyed!!!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "Assignation operator called from class DiamondTrap" << std::endl;
	std::cout << this->_name << " = " << rhs._name <<  std::endl << std::endl;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name <<  std::endl;
	std::cout << "My second name is " << ClapTrap::getName() << std::endl << std::endl;
}