/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 08:50:41 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 09:53:18 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

enum stringCode {
	eShrubberyCreation,
	eRobotomyRequest,
	ePresidentialPardon,
	eNotFound
};

stringCode hashIt(std::string const &nameOfForm) 
{
	if (nameOfForm == "shrubbery creation")
		return (eShrubberyCreation);
	if (nameOfForm == "robotomy request")
		return (eRobotomyRequest);
	if (nameOfForm == "presidential pardon")
		return (ePresidentialPardon);
	return (eNotFound);
}

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string nameOfForm, std::string targetForForm)
{
	switch (hashIt(nameOfForm))
	{
		case eShrubberyCreation:
		{
			std::cout << "Intern creates <" << nameOfForm << ">" << std::endl;
			Form	*x = new ShrubberyCreationForm(targetForForm);
			return (x);
		}
		case eRobotomyRequest:
		{
			std::cout << "Intern creates <" << nameOfForm << ">" << std::endl;
			Form	*y = new RobotomyRequestForm(targetForForm);
			return (y);
		}
		case ePresidentialPardon:
		{
			std::cout << "Intern creates <" << nameOfForm << ">" << std::endl;
			Form	*z = new PresidentialPardonForm(targetForForm);
			return (z);
		}
		case eNotFound:
		{
			std::cout << "Requested form unknown!" << std::endl;
			exit(-1);
		}
	}
}
