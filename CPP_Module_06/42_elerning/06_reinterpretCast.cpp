/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_reinterpretCast.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:04:00 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 14:43:43 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The reinterpret_cast<>() allows to make reinterpretations, but upcasts and downcasts as well
// The reinterpret_cast<>() allows to reinterpret any address as any other address with all consequences
// Mostly use for changing the type of some data

int main (void)
{
	float	a = 420.042f;						// Reference value

	void	*b = &a;							// Implicit promotion -> Ok
	int		*c = reinterpret_cast<int *>(b);	// Explicit demotion -> Ok, I obey
	int		&d = reinterpret_cast<int &>(b);	// Explicit demotion -> Ok, I obey

	return (0);
}