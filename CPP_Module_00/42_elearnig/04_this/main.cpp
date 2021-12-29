/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/24 17:38:18 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void){
	
	Sample instance;

	std::cout << "instance.foo called from main: " << instance.foo << std::endl;

	std::cout << "instance.bar() called from main:" << std::endl;
	instance.bar();
	
	return (0);
}