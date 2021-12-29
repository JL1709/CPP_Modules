/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:44:22 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 16:53:20 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "03_TClassPair.hpp"

int	main(void)
{
	Pair< int, int >			p1(4, 2);
	std::cout << p1 << std::endl;
	
	Pair< std::string, float >	p2(std::string("Pi"), 3.14f);
	std::cout << p2 << std::endl;
	
	Pair< float, bool>			p3(4.2f, true);
	std::cout << p3 << std::endl;
	
	Pair< bool, bool>			p4(true, false);
	std::cout << p4 << std::endl;

	return (0);
}