/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:09:20 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 20:42:50 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/* ************************************************************************** */

// When dynamic_cast for a pointer type fails it returns a null pointer 
// and the caller can check for that.
// But when it fails for a reference type it can't return a null reference, 
// so an exception is the only reasonable way to signal a problem

/* ************************************************************************** */

// class Base				{ public: virtual ~Base(void) {} };
// class A : public Base	{};
// class B : public Base	{};
// class C : public Base	{};

/* ************************************************************************** */

Base	*generate(void)
{
	int	random;
	srand(time(NULL));

	switch (random = rand() % 3)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
		default: return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}	

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "A" << std::endl;
	}
	catch (...)
	{
		try
		{
			B	&b = dynamic_cast<B &>(p);
			(void) b;
			std::cout << "B" << std::endl;
		}
		catch (...)
		{
			try
			{
				C	&c = dynamic_cast<C &>(p);
				(void) c;
				std::cout << "C" << std::endl;
			}
			catch (...) {}
		}
	}
}

int	main(void)
{
	Base	*x = generate();
	
	identify(x);
	identify(*x);

	delete (x);
	return (0);
}
