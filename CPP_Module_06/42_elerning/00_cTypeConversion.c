/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_cTypeConversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:55:06 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 11:06:43 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dump_32bits_integer(int const n);
void	dump_64bits_double(double const z);

/* ************************************************************************** */

int	main(void)
{
	int		a = 42;				/* Reference value                            */
	
	double	b = a;				/* Implicit conversion cast                   */
	double	c = (double) a;		/* Explicit conversion cast                   */

	double	d = a;				/* Implicit promotion -> Ok                   */
	int		e = d;				/* Implicit demotion  -> Harzardous!          */
	int		f = (int) d;		/* Explicit demotion -> Ok, you're in charge  */

	dump_32bits_integer(a);

	dump_64bits_double(b);
	dump_64bits_double(c);

	dump_64bits_double(d);
	dump_32bits_integer(e);
	dump_32bits_integer(f);

	return (0);
}