/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 14:23:24 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("Undefined wrongAnimal")
{
	std::cout << this->type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const srcType) : type(srcType)
{
	std::cout << this->type << " created" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << this->type << " destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const {return (this->type);}

void	WrongAnimal::makeSound(void) const 
{
	std::cout << "bliblablub" << std::endl;
}