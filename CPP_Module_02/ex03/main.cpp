/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:29:55 by jludt             #+#    #+#             */
/*   Updated: 2021/12/14 07:52:57 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int	main(void)
{
	Point a(1.0f, 1.0f);
	Point b(10.0f, 1.0f);
	Point c(1.0f, 10.0f);
	Point point(1.1f, 1.1f);

	if (bsp(a, b, c, point) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	
	return (0);
}