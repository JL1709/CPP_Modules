/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:25:21 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 09:20:16 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAMateria.hpp"

AMateria::AMateria(void) : type_("noType")
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : type_(type)
{
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->type_ = rhs.type_;
	return (*this);
}

std::string	const &AMateria::getType(void) const
{
	return (this->type_);
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
}