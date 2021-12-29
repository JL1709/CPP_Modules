/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:55:40 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:27:29 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
# include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{ 
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor called from class FragTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Parameterized constructor called from class FragTrap" << std::endl;
	std::cout << "Name          = " << _name << std::endl;
	std::cout << "Hitpoints     = " << _hitpoints << std::endl;
	std::cout << "Energy points = " << _energyPoints << std::endl;
	std::cout << "Attack damage = " << _attackDamage << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "Copy constructor called from class FragTrap" << std::endl << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called from class FragTrap" << std::endl;
	std::cout <<  _name << " got destoyed!!!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Assignation operator called from class FragTrap" << std::endl;
	ClapTrap::operator=(rhs);
	std::cout << this->_name << " = " << rhs._name <<  std::endl << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Ready for an awesome high five?" << std::endl << std::endl;
}