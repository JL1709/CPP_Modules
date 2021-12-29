/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:28:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:42:08 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("noName_clap_trap"), _hitpoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Default constructor called from class ClapTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Parameterized constructor called from class ClapTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called from class ClapTrap" << std::endl;
	std::cout <<  _name << " got destoyed" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called from class ClapTrap" << std::endl;
	std::cout << _name << " got copied" << std::endl << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignation operator called from class ClapTrap" << std::endl;
	std::cout << this->_name << " = " << rhs._name <<  std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

std::string		ClapTrap::getName(void) const {return (this->_name);}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "attack() called from class ClapTrap:" << std::endl;
	std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage() called from class ClapTrap:" << std::endl;
	std::cout << _name << " took " << amount << " damage" << std::endl << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		this->_hitpoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired() called from class ClapTrap:" << std::endl;
	std::cout << _name << " repaired by " << amount << " points" << std::endl << std::endl;
	this->_hitpoints += amount;
}
