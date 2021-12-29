/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:41:22 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 19:38:19 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassCharacter.hpp"

Character::Character(void) : _name("noName")
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete (this->_materia[i]);
	}
}

Character::Character(Character const &src)
{
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->~Character();
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materia[i] != NULL)
				this->_materia[i] = rhs._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_materia[idx] != NULL)
		{
			delete (this->_materia[idx]);
			this->_materia[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_materia[idx] != NULL)
			this->_materia[idx]->use(target);
	}
}
