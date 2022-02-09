/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 09:04:50 by julian            #+#    #+#             */
/*   Updated: 2022/02/09 09:21:50 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <algorithm>

template< typename T >
int easyfind(T &container, int nbr)
{
	typename T::iterator result = std::find(begin(container), end(container), nbr);

	if (result != std::end(container))
	{
		std::cout << "container contains " << nbr << std::endl;
		return (1);
	}
	else
		std::cout << "container doesn't contain " << nbr << '\n';
	return (-1);
}
