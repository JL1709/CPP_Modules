/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 08:46:54 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 19:43:51 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct
{
	char		a;
	char		b;
	int			c;
	float		d;
	std::string	e;
}		Data;


uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int	main(void)
{
	Data	x;
	x.a = '4';
	x.b = '2';
	x.c = 42;
	x.d = 42.42f;
	x.e = "42";
	
	uintptr_t	y = serialize(&x);

	Data		*z = deserialize(y);

	std::cout << "x.a+b  = " << x.a << x.b << std::endl;
	std::cout << "x.c    = " << x.c << std::endl;
	std::cout << "x.d    = " << x.d << std::endl;
	std::cout << "x.e    = " << x.e << std::endl << std::endl;
	std::cout << "y      = " << y << std::endl << std::endl;
	std::cout << "z->a+b = " << z->a << z->b << std::endl;
	std::cout << "z->c   = " << z->c << std::endl;
	std::cout << "z->d   = " << z->d << std::endl;
	std::cout << "z->e   = " << z->e << std::endl;

	return (0);
}