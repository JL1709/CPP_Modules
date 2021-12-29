/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 14:11:56 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void){
	
	Sample instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	std::cout << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return (0);
}