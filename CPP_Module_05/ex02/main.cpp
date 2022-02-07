/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:44:30 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 15:04:00 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	a("Bob", 1);
	Bureaucrat	b("Karen", 150);


/*--------------------ShrubberyCreationForm--------------------*/

	// ShrubberyCreationForm	x("home");

	// std::cout << x << std::endl;
	
	// std::cout << std::endl;

	// x.beSigned(b);
	// std::cout << x << std::endl << std::endl;

	// b.executeForm(x);
	// std::cout << x << std::endl << std::endl;

	// x.beSigned(a);
	// std::cout << x << std::endl << std::endl;

	// b.executeForm(x);
	// std::cout << x << std::endl << std::endl;

	// a.executeForm(x);
	// std::cout << x << std::endl << std::endl;


/*--------------------RobotomyRequestForm--------------------*/

	RobotomyRequestForm		y("robot");

	std::cout << y << std::endl;
	
	std::cout << std::endl;

	y.beSigned(b);
	std::cout << y << std::endl << std::endl;

	b.executeForm(y);
	std::cout << y << std::endl << std::endl;

	y.beSigned(a);
	std::cout << y << std::endl << std::endl;

	b.executeForm(y);
	std::cout << y << std::endl << std::endl;

	a.executeForm(y);
	

/*--------------------PresidentailPardonForm--------------------*/

	// PresidentialPardonForm	z("pardon");

	// std::cout << z << std::endl;
	
	// std::cout << std::endl;

	// z.beSigned(b);
	// std::cout << z << std::endl << std::endl;

	// b.executeForm(z);
	// std::cout << z << std::endl << std::endl;

	// z.beSigned(a);
	// std::cout << z << std::endl << std::endl;

	// b.executeForm(z);
	// std::cout << z << std::endl << std::endl;

	// a.executeForm(z);

	return (0);
}