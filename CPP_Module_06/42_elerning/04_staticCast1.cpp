/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_staticCast1.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:20:14 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 12:28:51 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		a = 42;						// Reference value

	double	b = a;						// Implicit promotion -> Ok
	int		c = b;						// Implicit demotion  -> Hell no!
	int		d = static_cast<int>(b);	// Explicit demotion  -> Ok, i obey

	return (0);
}