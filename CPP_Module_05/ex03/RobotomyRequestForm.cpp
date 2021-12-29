/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:03:33 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 19:48:23 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("noName", "noTarget", 42, 42)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotery", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::justDoIt(void) const
{
	int	robotomizedOrNot;
	srand(time(NULL));
	
	std::cout << "Some drilling noise..." << std::endl;
	robotomizedOrNot = rand() % 2;

	if (robotomizedOrNot == 1)
		std::cout << "<" << this->getTarget() << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "Failed to robotomize <" << this->getTarget() << ">" << std::endl;
}