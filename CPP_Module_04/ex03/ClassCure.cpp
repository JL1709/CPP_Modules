/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:20:38 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 18:14:47 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassCure.hpp"
# include <iostream>

Cure::Cure(void) : AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const &src) : AMateria(src)
{
}

Cure	&Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}