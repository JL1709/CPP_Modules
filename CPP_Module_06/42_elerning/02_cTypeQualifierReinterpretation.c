/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_cTypeQualifierReinterpretation.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:49:33 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 11:53:04 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int			a = 42;					/* Reference value                    */
	
	int const	*b = &a;				/* Implicit type qualifier cast       */
	int const	*c = (int const *) &a;	/* Explicit type qualifier cast       */

	int const	*d = &a;				/* Implicit promotion -> Ok           */
	int			*e = d;					/* Implicit demotion  -> Hell no!     */ //will not compile
	int			*f = (int *) d;			/* Explicit demotion -> Ok, I obey    */

	return (0);
}