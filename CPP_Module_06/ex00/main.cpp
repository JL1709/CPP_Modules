/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:46:10 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 08:41:22 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (-1);
		
	std::string	input = argv[1];

// ------------------------------ CHAR ------------------------------ //

	class nonDisplayableException : public std::exception {};

	try
	{
		int	c = std::stoi(input);
		if (!std::isprint(static_cast<unsigned char>(c)))
			throw nonDisplayableException();
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	}
	catch (nonDisplayableException)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	catch (...)
	{
		if (input.size() == 1)
		{
			if (!std::isdigit(input[0]))
				std::cout << "char: '" << input << "'" << std::endl;
			else
				std::cout << "char: impossible" << std::endl;
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	
// ------------------------------ INT ------------------------------ //
	
	try
	{
		int	n = std::stoi(input);
		std::cout << "int: " << n << std::endl;
	}
	catch (...)
	{
		std::cout << "int: impossible" << std::endl;
	}

// ------------------------------ FLOAT ------------------------------ //

	try
	{
		float	f = std::stof(input);
		std::cout << "float: " << f;
		if (f - static_cast<int>(f) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (...)
	{
		std::cout << "float: impossible" << std::endl;
	}

// ------------------------------ DOUBLE ------------------------------ //

	try
	{
		double	z = std::stod(input);
		std::cout << "double: " << z;
		if (z - static_cast<int>(z) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch (...)
	{
		std::cout << "double: impossible" << std::endl;
	}

	return (0);
}