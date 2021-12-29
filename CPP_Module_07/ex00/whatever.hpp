/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:34:08 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 18:09:32 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp = x
	x = y;
	y = tmp;
}

template<typename T>
T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
T &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}
