/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 09:23:48 by julian            #+#    #+#             */
/*   Updated: 2022/01/05 12:51:26 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
/* -------------------------------------------------------------------------- */
	
	std::cout << "MutantStack:" << std::endl;
	
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top element in the stack: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "Stack size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "\nIterate through stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	MutantStack<int> rstack = mstack;

	MutantStack<int>::reverse_iterator rit = rstack.rbegin();
	MutantStack<int>::reverse_iterator rite = rstack.rend();

	std::cout << "\nReverse iterate through stack:" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::stack<int> s(mstack);

/* -------------------------------------------------------------------------- */
	
	std::cout << "std::list:" << std::endl;
	
	std::list<int> list;
	
	list.push_back(5);
	list.push_back(17);
	
	std::cout << "Top element in the stack: " << list.back() << std::endl;
	
	list.pop_back();
	
	std::cout << "Stack size: " << list.size() << std::endl;
	
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	
	std::list<int>::iterator lit = list.begin();
	std::list<int>::iterator lite = list.end();
	
	++lit;
	--lit;
	std::cout << "\nIterate through list:" << std::endl;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	
	return 0;
}