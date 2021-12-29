/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/24 17:27:01 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void){
	
	Sample instance;

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();
	
	return (0);
}