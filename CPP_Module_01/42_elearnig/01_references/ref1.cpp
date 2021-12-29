/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:40:50 by jludt             #+#    #+#             */
/*   Updated: 2021/12/07 13:51:06 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Concept of "References":
References can be seen as an alias of an existing variable 
or a pointer that is constant and always unreferenced and never void
-
A reference is like a dereferenced pointer
deference a pointer means that we are interested in what is beeing pointed at and not in the pointer itself
*/

int	main(void)
{
	int		numberOfBalls = 42;
	
	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef  = numberOfBalls;
	//int&	ballsRef2;					//not possible!!! a reference can't point on nothing!!!!

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	
	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return (0);
}