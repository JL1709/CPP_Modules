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
}

Dog::~Dog(void)
{
}

Dog::Dog(Dog const &src) : Animal(src)
{
}

Dog	&Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff" << std::endl;
}
