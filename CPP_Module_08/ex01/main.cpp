/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:21:17 by julian            #+#    #+#             */
/*   Updated: 2022/01/04 17:31:09 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Simple test:" << std::endl;
	
	Span sp = Span(5);

	sp.addNumber(5);
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

	try
	{
		sp2.addNumber(5);
		sp2.addNumber(3);
		sp2.addNumber(17);
		sp2.addNumber(9);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}

	
	Span sp3 = Span(1);
	
	sp3.addNumber(5);
	
	try
	{
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{	
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
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