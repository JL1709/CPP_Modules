/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:46:03 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 18:30:13 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	printIntArray(int &i)
{
	std::cout << i << std::endl;
}

void	printFloatArray(float &f)
{
	std::cout << f << std::endl;
}

void	printCharArray(char &c)
{
	std::cout << c << std::endl;
}

void	printStringArray(std::string &s)
{
	std::cout << s << std::endl;
}

int	main(void)
{
	char	charArray[] = {'x', 'y', 'z'};
	::iter(charArray, sizeof(charArray) / sizeof(char) , printCharArray);
	
	std::cout << std::endl;
	
	int	intArray[] = {21, 42, 84};
	::iter(intArray, sizeof(intArray) / sizeof(int) , printIntArray);

	std::cout << std::endl;

	float	floatArray[] = {21.21f, 42.42f, 84.84f};
	::iter(floatArray, sizeof(floatArray) / sizeof(float) , printFloatArray);

	std::cout << std::endl;
	
	std::string	stringArray[] = {"XXX", "YYY", "ZZZ"};
	::iter(stringArray, sizeof(stringArray) / sizeof(std::string) , printStringArray);

	
	return (0);
}