/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:30:51 by jludt             #+#    #+#             */
/*   Updated: 2021/12/13 15:04:54 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	public:
		Fixed(void);								//canonical form: default constructor
		Fixed(int const n);
		Fixed(float const f);
		~Fixed(void);								//canonical form: destructor
		Fixed(Fixed const & src);					//canonical form: copy constructor
		
		Fixed 	&operator=(Fixed const & rhs);		//canonical form: assignation operator
		Fixed 	operator+(Fixed const &rhs) const;
		Fixed 	operator-(Fixed const &rhs) const;
		Fixed 	operator*(Fixed const &rhs) const;
		Fixed 	operator/(Fixed const &rhs) const;

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed 	&operator++(void);
		Fixed 	operator++(int n);
		Fixed 	&operator--(void);
		Fixed 	operator--(int n);

		static Fixed 		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed 		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPointValue;
		static const int 	_nbrOfFractionalBits;
};

std::ostream &operator<<(std::ostream & o, Fixed const & i);
