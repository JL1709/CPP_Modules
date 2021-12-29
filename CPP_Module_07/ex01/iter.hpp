/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:48:31 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 18:31:16 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

template< typename T>
void	iter(T *array, std::size_t sizeOfArray, void (*functionToCallOn)(T &))
{
	for (std::size_t i = 0; i < sizeOfArray; i++)
	{
		functionToCallOn(array[i]);
	}
}
