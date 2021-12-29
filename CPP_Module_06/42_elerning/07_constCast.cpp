/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_constCast.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 14:45:05 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 14:54:50 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the const_cast<>() allows to make transformations of the type-qualifier
// using const_cast<>{} is a sign for bad written code!! using it should be avoided!!

int main (void)
{
	int			a = 42;						// Reference value

	int const	*b = &a;					// Implicit promotion -> Ok
	int			*c = b;						// Implicit demotion -> Hell no!
	int			*d = const_cast<int *>(b);	// Explicit demotion -> Ok, I obey

	return (0);
}