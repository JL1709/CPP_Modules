/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 09:04:50 by julian            #+#    #+#             */
/*   Updated: 2022/01/05 09:19:05 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >							// Template definition
int easyfind(T &container, int const &nbr)		// Template function
{
	typename T::const_iterator result = std::find(begin(container), end(container), nbr);

	if (result != std::end(container))
	{
		std::cout << "container contains " << nbr << std::endl;
		return (1);
	}
	else
		std::cout << "container does not contain " << nbr << '\n';
	return (-1);
}
