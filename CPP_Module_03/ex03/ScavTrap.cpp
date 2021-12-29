/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:55:40 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:43:56 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{ 
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor called from class ScavTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Parameterized constructor called from class ScavTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "Copy constructor called from class ScavTrap" << std::endl << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called from class ScavTrap" << std::endl;
	std::cout <<  _name << " got destoyed!!!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignation operator called from class ScavTrap" << std::endl;
	ClapTrap::operator=(rhs);
	std::cout << this->_name << " = " << rhs._name <<  std::endl << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "attack() called from class ScavTrap:" << std::endl;
	this->ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void)
{
	std::cout << _name << " has entered Gate keeper mode" << std::endl << std::endl;
}