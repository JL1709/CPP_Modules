/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:34:08 by julian            #+#    #+#             */
/*   Updated: 2022/02/08 12:51:05 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T &x, T &y)
{
	T tmp(x);
	x = y;
	y = tmp;
}

template<typename T>
const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
const T &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}
