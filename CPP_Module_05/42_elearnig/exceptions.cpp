/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:46:13 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 16:20:22 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// exceptions are a new way of error handling
// instead of return(-1), return(-2),... we can "throw" an "exception()"

#include <stdexcept>
#include <iostream>

void	test1(void)
{
	try
	{
		//Do some stuff here
		if (/* there's an error */)
		{
			throw std::exception();
		}
		else
		{
			//Do some stuff
		}
	}
	catch (std::exception e) //catch can be seen as a function, which has exception as a parameter
	{
		//Handle error here, e.g. printing error message
		std::cerr << e.what() << '\n';
	}
}

void	test2(void)
{
	//DO some stuff
	if (/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some stuff
	}
}

void	test3(void)
{
	try
	{
		test2();
	}
	catch (const std::exception& e)
	{
		//Handle error
		std::cerr << e.what() << '\n';
	}
	
}

void	test4(void)
{
	class PEBKACException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Problem exists between keyboard an char");
			}
	};
	
	try
	{
		test3();
	}
	catch (PEBKACException &e)									//specific catch
	{
		//Handle the fact that the user is an idiot
	}
	catch (std::exception &e)									//generic catch
	{
		//Handle other exceptions that are like std::exception
	}
}