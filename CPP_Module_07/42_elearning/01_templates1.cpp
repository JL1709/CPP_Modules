/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_templates1.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:33:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 15:44:28 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >									// Template definition
T const	&max(T const &x, T const &y)
{
	return (x>=y ? x : y);
}

int		foo(int x) 
{
	printf("Long computing time\n");
	return x;
}

int	main(void)
{
	int		a = 21;
	int		b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl; 				// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl;					// Implicit instanciation

	float	c = -1.7f;
	float	d = 4.2f;

	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl; 			// Explicit instanciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl;					// Implicit instanciation

	char	e = 'a';
	char	f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl; 				// Explicit instanciation
	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max(e, f) << std::endl;					// Implicit instanciation

	//But...
	int		ret = max<int>(foo(a), foo(b));					// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;


	return (0);
}
