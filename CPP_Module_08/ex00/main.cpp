/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 09:04:48 by julian            #+#    #+#             */
/*   Updated: 2022/01/05 09:18:42 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <vector>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int	main(void)
{
	
	std::array<int, 42>	myArray;				// Declare an integer array with length 42
	std::vector<int>	myVector;
	std::list<int>		myList;

	for (int i = 0; i < 42; i++)				// Fill array with value
		std::fill_n (myArray.begin()+i, 1, i);
	for (int i = 0; i < 42; i++)				// Add new element at the end of the vector
		myVector.push_back(i);
	for (int i = 0; i < 42; i++)				// Add new element at the end of the list
		myList.push_back(i);

	easyfind(myArray, 84);
	easyfind(myVector, 21);
	easyfind(myList, 42);

	return (0);
}
