/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:28:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 07:59:30 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noName"), _hitpoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<  _name << " got destoyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << _name << " got copied" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << this->_name << " = " << rhs._name <<  std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	std::cout << "Claptrap " << _name << " took " << amount << " damage" << std::endl;
	if (this->_hitpoints <= 0)
		this->_hitpoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << "Claptrap " << _name << " got repaired by " << amount << " points" << std::endl;
}
