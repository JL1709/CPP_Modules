/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_stl1.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:19:00 by julian            #+#    #+#             */
/*   Updated: 2022/01/03 14:08:41 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main(void)
{
	std::list<int>						lst1;
	// std::map<std::string, IOperation*>	map1;			//a map is the C++ version of a hash table

	//a vector is basically an array
	std::vector<int>					v1;
	std::vector<int>					v2(42, 100);	//creating 42 entries which will contain "100" by default
	
	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	// map1["opA"] = new OperationA;
	// map1["opB"] = new OperationB;

	
	//iterators are basically the STL container equivalent of pointers
	// all STL container classes use interators
	std::list<int>::const_iterator		it;
	std::list<int>::const_iterator		ite = lst1.end();

	for (it = lst1.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}


	return (0);
}