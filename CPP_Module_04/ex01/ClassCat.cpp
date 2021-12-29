/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 12:30:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassCat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete (this->_brain);
}

Cat::Cat(Cat const &src) : Animal(src)
{
	this->_brain = new Brain(*src._brain);
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		delete (this->_brain);
		this->_brain = new Brain(*rhs._brain);
		this->Animal::operator=(rhs);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
