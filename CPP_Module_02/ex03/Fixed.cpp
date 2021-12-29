/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:30:34 by jludt             #+#    #+#             */
/*   Updated: 2021/12/13 15:50:50 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_nbrOfFractionalBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0) {}
Fixed::Fixed(int const i) {this->_fixedPointValue = i << this->_nbrOfFractionalBits;}
Fixed::Fixed(float const f) {this->_fixedPointValue = roundf(f * float(1 << this->_nbrOfFractionalBits));}
Fixed::Fixed(Fixed const & src) {*this = src;}
Fixed::~Fixed(void) {}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixedPointValue + rhs.getRawBits());
	return (tmp);
}
Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixedPointValue - rhs.getRawBits());
	return (tmp);;
}

Fixed	Fixed::operator*(Fixed const &rhs) const 
{
	Fixed	tmp;

	tmp.setRawBits((this->_fixedPointValue * rhs.getRawBits()) >> _nbrOfFractionalBits);
	return (tmp);

}

Fixed	Fixed::operator/(Fixed const &rhs) const 
{
	Fixed	tmp;

	tmp.setRawBits((this->_fixedPointValue << _nbrOfFractionalBits)/ rhs.getRawBits());
	return (tmp);
}

bool	Fixed::operator>(Fixed const &rhs) const {return ((this->_fixedPointValue > rhs.getRawBits()) ? true : false);}
bool	Fixed::operator<(Fixed const &rhs) const {return ((this->_fixedPointValue < rhs.getRawBits()) ? true : false);}
bool	Fixed::operator>=(Fixed const &rhs) const {return ((this->_fixedPointValue >= rhs.getRawBits()) ? true : false);}
bool	Fixed::operator<=(Fixed const &rhs) const {return ((this->_fixedPointValue <= rhs.getRawBits()) ? true : false);}
bool	Fixed::operator==(Fixed const &rhs) const {return ((this->_fixedPointValue == rhs.getRawBits()) ? true : false);}
bool	Fixed::operator!=(Fixed const &rhs) const {return ((this->_fixedPointValue != rhs.getRawBits()) ? true : false);}


Fixed &Fixed::operator++(void) //pre-increment
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator++(int n) //post-increment
{
	Fixed	tmp = *this;
	(void) n;

	this->_fixedPointValue++;
	return (tmp);
}

Fixed &Fixed::operator--(void) //pre-decrement
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int n) //post-decrement
{
	Fixed	tmp = *this;
	(void) n;
	
	this->_fixedPointValue--;
	return (tmp);
}

float	Fixed::toFloat(void) const
{
	float	fixedToFloat;

	fixedToFloat = (float)this->_fixedPointValue / (float)(1 << this->_nbrOfFractionalBits);
	return (fixedToFloat);
}

int	Fixed::toInt(void) const
{
	int	fixedToInt;

	fixedToInt = (int)this->_fixedPointValue / (int)(1 << this->_nbrOfFractionalBits);
	return (fixedToInt);
}

int		Fixed::getRawBits(void) const {return (this->_fixedPointValue);}
void	Fixed::setRawBits(int const raw) {this->_fixedPointValue = raw;}

std::ostream &operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

Fixed &Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
