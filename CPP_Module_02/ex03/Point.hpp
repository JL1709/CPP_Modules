/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:52:17 by julian            #+#    #+#             */
/*   Updated: 2021/12/13 22:50:11 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);							//canonical form: default constructor
		Point(Point const &src);				//canonical form: copy constructor
		Point(const float a, const float b);
		~Point(void);							//canonical form: destructor

		Point	&operator=(Point const &rhs);	//canonical form: assignation operator

		Fixed	getX(void) const;
		void	setX(const Fixed x);
		Fixed	getY(void) const;
		void	setY(const Fixed y);

	private:
		Fixed _x;
		Fixed _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
