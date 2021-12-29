/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:14:44 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 10:58:08 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Integer
{
	public:
		Integer(int const n);
		~Integer(void);

		int		getValue(void) const;

		//operator is s special keyword which allows to make a declaration of a member function of the class
		Integer &	operator=(Integer const & rhs);			//assignment operator
		Integer		operator+(Integer const & rhs) const;	//addition operator
	
	private:
		int	_n;
};

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif