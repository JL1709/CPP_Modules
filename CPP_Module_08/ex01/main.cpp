/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:21:17 by julian            #+#    #+#             */
/*   Updated: 2022/02/09 10:37:35 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Simple test:" << std::endl;
	
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

/* -------------------------------------------------------------------------- */

	std::cout << "Exceptions:" << std::endl;

	Span sp2 = Span(3);

	sp2.addNumber(5);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);		//Exception: "Object is full!"

	Span sp3 = Span(1);
	
	sp3.longestSpan();		//Exception: "No span to find" -> no numbers stored yet
	sp3.shortestSpan();		//Exception: "No span to find" -> no numbers stored yet
	sp3.addNumber(5);
	sp3.shortestSpan();		//Exception: "No span to find" -> just one number stored
	sp3.longestSpan();		//Exception: "No span to find" -> just one number stored
	std::cout << std::endl;
	
/* -------------------------------------------------------------------------- */

	std::cout << "Add numbers by passing range of iterators:" << std::endl;

	Span sp4 = Span(10001);

	std::vector<int> vector;
	for (int i = 0; i < 10001; i++)
		vector.push_back(i);
	
	sp4.addNumber(vector.begin(), vector.end());

	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	return (0);
}