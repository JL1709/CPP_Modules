/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:30:51 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 18:07:51 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	public:
		Fixed(void);							//canonical form: default constructor
		Fixed(int const n);
		Fixed(float const f);
		~Fixed(void);							//canonical form: destructor
		Fixed(Fixed const & src);				//canonical form: copy constructor
		
		Fixed &	operator=(Fixed const & rhs);	//canonical form: assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPointValue;
		static const int 	_nbrOfFractionalBits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);
