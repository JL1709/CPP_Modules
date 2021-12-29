/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_staticCast2.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:02:00 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 12:34:42 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Parent					{};
class Child1 : public Parent	{};
class Child2 : public Parent	{};

class Unrelated					{};

/* ************************************************************************** */

int	main(void)
{
	Child1			a;							// Reference value
	
	Parent		*b = &a;						// Implicit upcast   -> Ok
	Child1		*c = b;							// Implicit downcast -> Hell no!	-> will not compile
	Child2		*d = static_cast<Child2 *>(b);	// Explicit downcast -> Ok, I obey

	Unrelated	*e = static_cast<Unrelated *>(&a); // Explicit conversion -> No!	-> will not compile

	return (0);
}

// static_cast<>() prevents casts between unrelated class hirarchies