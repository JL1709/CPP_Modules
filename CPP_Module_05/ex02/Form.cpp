/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:56:54 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 19:31:26 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(void) : _name("noName"), _target("noTarget"), _signed(false), _requiredGradeToSigne(42), _requiredGradeToExecute(42)
{
}

Form::~Form(void)
{
}

Form::Form(std::string name, std::string target, int sign, int execute) : _name(name), _target(target), _signed(false), _requiredGradeToSigne(sign), _requiredGradeToExecute(execute)
{
	try
	{
		if (sign < 1 || execute < 1)
			throw Form::GradeTooHighException();
		if (sign > 150 || execute > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		exit (-1);
	}	
}

Form::Form(Form const &src) : _name(src._name), _target(src._target), _signed(false), _requiredGradeToSigne(src._requiredGradeToSigne), _requiredGradeToExecute(src._requiredGradeToExecute)
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::string	Form::getName(void) const {return (this->_name);}
std::string	Form::getTarget(void) const {return (this->_target);}
bool		Form::getSigned(void) const {return (this->_signed);}
int			Form::getRequiredGradeToSign(void) const {return (this->_requiredGradeToSigne);}
int			Form::getRequiredGradeToExecute(void) const {return (this->_requiredGradeToExecute);}

void		Form::beSigned(Bureaucrat &src)
{
	try
	{
		if (src.getGrade() > this->_requiredGradeToSigne)
			throw Form::GradeTooLowException();
		else
		{
			this->_signed = true;
			src.signForm(*this);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		src.signForm(*this);
	}
}

void	Form::execute(Bureaucrat const &executer) const
{
	try
	{
		if (this->_signed == false)
			throw Form::NotSignedException();
		else if (this->_requiredGradeToExecute < executer.getGrade())
			throw Form::GradeTooLowException();
		else
			justDoIt();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char	*Form::NotSignedException::what() const throw()
{
	return ("Form not signed!");
}

std::ostream &	operator<<(std::ostream &o, Form const &i)
{
	o << "Form: " << i.getName() << std::endl 											\
		<< "target: " << i.getTarget() << std::endl					 					\
		<< "Signed: " << std::boolalpha << i.getSigned() << std::endl 					\
		<< "Reguired grade to sign form: " << i.getRequiredGradeToSign() << std::endl	\
		<< "Required grade to execute form: " << i.getRequiredGradeToExecute();
	return (o);
}