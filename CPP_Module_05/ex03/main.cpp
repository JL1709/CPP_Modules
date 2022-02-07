/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:44:30 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 15:08:10 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	a("Bob", 1);
	Bureaucrat	b("Karen", 150);

	Intern		someRandomIntern;
	Form		*rrf;


/*--------------------ShrubberyCreationForm--------------------*/

	rrf = 	someRandomIntern.makeForm("shrubbery creation", "Tree");

	std::cout << (*rrf) << std::endl;
	
	std::cout << std::endl;

	(*rrf).beSigned(b);
	std::cout << (*rrf) << std::endl << std::endl;

	b.executeForm(*rrf);
	std::cout << (*rrf) << std::endl << std::endl;

	(*rrf).beSigned(a);
	std::cout << (*rrf) << std::endl << std::endl;

	b.executeForm(*rrf);
	std::cout << (*rrf) << std::endl << std::endl;

	a.executeForm(*rrf);
	std::cout << (*rrf) << std::endl << std::endl;


/*--------------------RobotomyRequestForm--------------------*/

	// rrf = 	someRandomIntern.makeForm("robotomy request", "Bender");

	// std::cout << (*rrf) << std::endl;
	
	// std::cout << std::endl;

	// (*rrf).beSigned(b);
	// std::cout << (*rrf) << std::endl << std::endl;

	// b.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;

	// (*rrf).beSigned(a);
	// std::cout << (*rrf) << std::endl << std::endl;

	// b.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;

	// a.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;
	

/*--------------------PresidentailPardonForm--------------------*/

	// rrf = 	someRandomIntern.makeForm("presidential pardon", "President");

	// std::cout << (*rrf) << std::endl;
	
	// std::cout << std::endl;

	// (*rrf).beSigned(b);
	// std::cout << (*rrf) << std::endl << std::endl;

	// b.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;

	// (*rrf).beSigned(a);
	// std::cout << (*rrf) << std::endl << std::endl;

	// b.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;

	// a.executeForm(*rrf);
	// std::cout << (*rrf) << std::endl << std::endl;


/*--------------------UnknownForm--------------------*/

	// rrf = 	someRandomIntern.makeForm("unknown form", "unknown");

	delete (rrf);
	return (0);
}