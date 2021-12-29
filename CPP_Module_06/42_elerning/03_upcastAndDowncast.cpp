/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_upcastAndDowncast.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:02:00 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 12:08:33 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Parent					{};
class Child1 : public Parent	{};
class Child2 : public Parent	{};

/* ************************************************************************** */

int	main(void)
{
	Child1		a;					// Reference value
	
	Parent	*b = &a;				// implicit 'reinterpretation' cast
	Parent	*c = (Parent *) &a;		// Explicit 'reinterpretation' cast
	
	Parent	*d = &a;				// Implicit upcast   -> Ok
	Child1	*e = d;					// Implicit downcast -> Hell no!
	Child2	*f = (Child2 *) d;		// Explicit downcast -> Ok, but really? Will give problems during runtime since we are reinterpreting a Child1(->d) as a Child2

	return (0);
}