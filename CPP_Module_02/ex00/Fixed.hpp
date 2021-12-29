/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:30:51 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 16:24:12 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:
		Fixed(void);							//canonical form: default constructor
		~Fixed(void);							//canonical form: destructor
		Fixed(Fixed const & src);				//canonical form: copy constructor
		
		Fixed &	operator=(Fixed const & rhs);	//canonical form: assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static const int 	_nbrOfFractialBits;
};
