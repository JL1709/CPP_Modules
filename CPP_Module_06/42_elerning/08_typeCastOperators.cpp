/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_typeCastOperators.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:56:24 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 15:11:04 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// type cast operators are a new syntax on how to define classes

#include <iostream>

class Foo
{
	private:
		float	_v;

	public:
		Foo(float const v) : _v(v)	{}
		float	getV(void) 			{return (this->_v);}

		operator	float()			{return (this->_v);}					// -> cast operator
		operator	int()			{return (static_cast<int>(this->_v));}	// -> cast operator
};

int	main(void)
{
	Foo		a(420.024f);
	float	b = a;
	int		c = a;

	std::cout << "a = " << a.getV() << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
}