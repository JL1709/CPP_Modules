/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_stl2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:09:42 by julian            #+#    #+#             */
/*   Updated: 2022/01/03 14:14:54 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
	std::cout << i << std::endl;
}

void addOne(int &i)
{
	i++;
}

int main(void)
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);

	for_each(lst.begin(), lst.end(), displayInt);
	for_each(lst.begin(), lst.end(), addOne);
	for_each(lst.begin(), lst.end(), displayInt);

	return (0);
}