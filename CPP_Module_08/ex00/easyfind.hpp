/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 09:04:50 by julian            #+#    #+#             */
/*   Updated: 2022/01/03 19:51:49 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >							// Template definition
int easyfind(T &container, int const &value)	// Template function
{
	typename T::iterator result = std::find(begin(container), end(container), value);

	if (result != std::end(container))
	{
		std::cout << "container contains " << value << std::endl;
		return (1);
	}
	else
		std::cout << "container does not contain " << value << '\n';
	return (-1);
}
