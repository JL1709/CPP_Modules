/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:39:10 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 07:54:39 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	pXFixed = point.getX();
	Fixed	pYFixed = point.getY();
	Fixed	aXFixed = a.getX();
	Fixed	aYFixed = a.getY();
	Fixed	bXFixed = b.getX();
	Fixed	bYFixed = b.getY();
	Fixed	cXFixed = c.getX();
	Fixed	cYFixed = c.getY();

	// float	pX = pXFixed.toFloat();
	// float	pY = pYFixed.toFloat();
	// float	aX = aXFixed.toFloat();
	// float	aY = aYFixed.toFloat();
	// float	bX = bXFixed.toFloat();
	// float	bY = bYFixed.toFloat();
	// float	cX = cXFixed.toFloat();
	// float	cY = cYFixed.toFloat();
	
	// float	s = (aX - cX) * (pY - cY) - (aY - cY) * (pX - cX);
	// float	t = (bX - aX) * (pY - aY) - (bY - aY) * (pX - aX);

	// if ((s < 0) != (t < 0) && s != 0 && t != 0)
	// 	return (false);

	// float d = (cX - bX) * (pY - bY) - (cY - bY) * (pX - bX);
	// 	return (d == 0 || (d < 0) == (s + t <= 0));
	
	int asX = pXFixed.getRawBits() - aXFixed.getRawBits();
	int asY = pYFixed.getRawBits() - aYFixed.getRawBits();

	bool sAb = (bXFixed.getRawBits() - aXFixed.getRawBits()) * asY - (bYFixed.getRawBits() - aYFixed.getRawBits()) * asX > 0;
	
	if ((cXFixed.getRawBits() - aXFixed.getRawBits()) * asY - (cYFixed.getRawBits() - aYFixed.getRawBits()) * asX > 0 == sAb)
		return (false);
	if ((cXFixed.getRawBits() - bXFixed.getRawBits()) * (pYFixed.getRawBits() - bYFixed.getRawBits()) - (cYFixed.getRawBits() - bYFixed.getRawBits()) * (pXFixed.getRawBits() - bXFixed.getRawBits()) > 0 != sAb)
		return (false);
	return (true);
}
