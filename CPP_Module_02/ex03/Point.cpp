/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:54:57 by julian            #+#    #+#             */
/*   Updated: 2021/12/13 22:51:34 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}
Point::Point(const float a, const float b) : _x(a), _y(b) {}
Point::~Point(void) {}
Point::Point(Point const &src) {*this = src;}

Point	&Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return (*this);
}

Fixed	Point::getX(void) const {return (this->_x);}
Fixed	Point::getY(void) const {return (this->_y);}
void	Point::setX(const Fixed x) {(Fixed)this->_x = x;}
void	Point::setY(const Fixed y) {(Fixed)this->_y = y;}
