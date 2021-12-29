/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:30:02 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void){
	
	Sample instance;

	instance.publicFoo = 42;
	std::cout << std::endl << "Called from main function:" << std::endl;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	
	// can't be used since it is private:
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	
	// can't be used since it is private:
	// instance.privateBar();
	
	std::cout << std::endl;
	
	

	return (0);
}