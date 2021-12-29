/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:20:38 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 19:34:27 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassIce.hpp"
# include <iostream>

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &src) : AMateria(src)
{
}

Ice	&Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}