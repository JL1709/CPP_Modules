/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:44:30 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 14:41:54 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	a("Bob", 1);
	Bureaucrat	b("Karen", 150);

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl;

	a.incrementGrade();
	b.decrementGrade();

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	a.decrementGrade();
	b.incrementGrade();

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return (0);
}