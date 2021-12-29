/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_cTypeReinterpretation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:55:06 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 11:18:18 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* ************************************************************************** */

int	main(void)
{
	float	a = 420.042f;			/* Reference value                        */
	
	void	*b = &a;				/* Implicit reinterpretation cast         */
	void	*c = (void *) &a;		/* Explicit reinterpretation cast         */

	void	*d = &a;				/* Implicit promotion -> Ok               */
	int		*e = d;					/* Implicit demotion  -> Harzardous!      */
	int		*f = (int *) d;			/* Explicit demotion -> Ok, I obey        */

	printf("a:	%p, %f\n", &a, a);

	printf("b:	%p\n", b);
	printf("c:	%p\n", c);
	
	printf("d:	%p\n", d);
	printf("e:	%p, %d\n", e, *e);
	printf("f:	%p, %d\n", f, *f);

	return (0);
}