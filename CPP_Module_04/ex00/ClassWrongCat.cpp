/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 12:30:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
}

WrongCat::~WrongCat(void)
{
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	WrongAnimal::operator=(rhs);
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}
