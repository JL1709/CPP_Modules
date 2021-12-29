/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:01:05 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 16:11:45 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "02_TClassVertex.hpp"

int main(void)
{
	Vertex< int >	v1(12, 23, 34);
	Vertex<>		v2(12, 23, 34);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}