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
}

Cat::~Cat(void)
{
}

Cat::Cat(Cat const &src) : Animal(src)
{
}

Cat	&Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}
