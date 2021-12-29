/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:46:39 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void){
	
	std::cout << "Constructor called for instance2" << std::endl;

	this->foo = 21;
	std::cout << "this->foo = " << this->foo << std::endl;

	this->bar2();

}

Sample2::~Sample2(void){
	
	std::cout << "Destructor called for instance2" << std::endl;
}

void	Sample2::bar2(void) const {
	
	std::cout << "Member function bar2 called" << std::endl;

	return ;
}
