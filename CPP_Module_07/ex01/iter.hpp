/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:48:31 by julian            #+#    #+#             */
/*   Updated: 2022/01/11 10:57:15 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template< typename T>
void	iter(T *array, std::size_t sizeOfArray, void (*functionToCallOn)(T &))
{
	for (std::size_t i = 0; i < sizeOfArray; i++)
	{
		functionToCallOn(array[i]);
	}
}
