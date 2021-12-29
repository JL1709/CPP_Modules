/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 13:33:39 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include <iostream>

Animal::Animal(void) : type("Undefined animal")
{
	std::cout << this->type << " created" << std::endl;
}

Animal::Animal(std::string const srcType) : type(srcType)
{
	std::cout << this->type << " created" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << this->type << " destroyed" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const 
{
	return (this->type);
}