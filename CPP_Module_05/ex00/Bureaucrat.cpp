/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:44:48 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 15:17:29 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("noName"), _grade(42)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		exit(-1);
	}
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string		Bureaucrat::getName(void) const {return (this->_name);}
int				Bureaucrat::getGrade(void) const {return (this->_grade);}

void			Bureaucrat::incrementGrade(void)
{
	try
	{
		if ((this->_grade - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void			Bureaucrat::decrementGrade(void)
{
	try
	{
		if ((this->_grade + 1) > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("A bureaucrat can't be the boss!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("I'm sure he/she deserves it, but stay inside the range 1(highest possible) <--> 150(lowest possible)!");
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << "<" << i.getName() << ">" << ", bureaucrat grade <" << i.getGrade() << ">";
	return (o);
}
