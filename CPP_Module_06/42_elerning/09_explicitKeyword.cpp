/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_explicitKeyword.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:12:06 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 15:44:44 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class A {};
class B {};

class C
{
	public:
				C(A const & _)	{return;}
	explicit	C(B const & _)	{return;}
};

/* ************************************************************************** */

void	f(C const & _)
{
	return;
}

/* ************************************************************************** */

int	main(void)
{
	f(A());		// Implicit conversion OK
	f(B());		// implicit conversion NOT OK, constructor is explicit

	return (0);
}