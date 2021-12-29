/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:46:46 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void){
	
	std::cout << "Constructor called for instance1" << std::endl;

	this->foo = 42;
	std::cout << "this->foo = " << this->foo << std::endl;

	this->bar1();

}

Sample1::~Sample1(void){
	
	std::cout << "Destructor called for instance1" << std::endl;
}

void	Sample1::bar1(void) const {
	
	std::cout << "Member function bar1 called" << std::endl;

	return ;
}
