/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_templates2.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:33:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 15:44:32 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >									// Template definition
class List
{
	public:
		List<T>(T const &content)
		{
			// Etc...
		}
		List<T>(List<T> const &list)
		{
			// Etc...
		}
		~List<T>(void)
		{
			// Etc...
		}

	private:
		T		_content;
		List<T>	_next		
};

int	main(void)
{
	List< int >				a(42);
	List< float >			b(3.14f);
	List< List < int > >	c(a);

	return (0);
}
