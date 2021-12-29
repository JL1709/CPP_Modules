/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_dynamicCast.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:35:51 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 13:02:15 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dynamic casts happen during runtime (all other casts happen during compilation)
// Dynamic cast is only used for downcast and checking whether downcast is possible or not
// Dynamic cast will work only on a pointer and reference cast
// To use the dynamic cast you must be in a situation in which the RTTI's(Run-tiem type indormations )are enabled meaning a class with subtyping polymorphism
// therefore with at least one method meaning a virtual member function

#include <iostream>
#include <typeinfo> //
#include <exception>

class Parent					{ public: virtual ~Parent(void) {} };
class Child1 : public Parent	{};
class Child2 : public Parent	{};

/* ************************************************************************** */

int	main(void)
{
	Child1	a;										// Reference value
	Parent	*b = &a;								// Implicit upcast -> Ok

	// Explicit downcast -> Suspens...
	Child1	*c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT OK" << std::endl;
	else
		std::cout << "Conversion is OK" << std::endl;

	// Explicit downcast ->Suspens...
	try
	{
		Child2	&d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is OK" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT OK: " << bc.what() << std::endl;
		return (0);
	}
	return (0);
}