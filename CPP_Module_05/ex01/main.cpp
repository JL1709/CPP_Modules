/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:44:30 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 16:40:29 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	a("Bob", 1);
	Bureaucrat	b("Karen", 140);

	//Form		q("WrongForm", 0, 151);
	Form		x("TopSecret", 1, 1);
	Form		y("RandomStuff", 140, 150);

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	
	std::cout << std::endl;

	x.beSigned(b);
	std::cout << x << std::endl << std::endl;

	x.beSigned(a);
	std::cout << x << std::endl << std::endl;

	y.beSigned(b);
	std::cout << y << std::endl;

	return (0);
}