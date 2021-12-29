/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:19:21 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 10:40:51 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member function bad called with char overload: " << c << std::endl;
}

void	Sample::bar(int const n) const
{
	std::cout << "Member function bad called with int overload: " << n << std::endl;
}

void	Sample::bar(float const z) const
{
	std::cout << "Member function bad called with float overload: " << z << std::endl;
}

void	Sample::bar(Sample const & i) const
{
	(void) i;
	std::cout << "Member function bad called with Sample class overload" << std::endl;
}