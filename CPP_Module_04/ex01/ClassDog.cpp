/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 12:30:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassDog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain();
}

Dog::~Dog(void)
{
	delete (this->_brain);
}

Dog::Dog(Dog const &src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		delete (this->_brain);
		this->_brain = new Brain(*rhs._brain);
		this->Animal::operator=(rhs);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff" << std::endl;
}

Brain	*Dog::getBrain(void) const 
{
	return (this->_brain);
}
