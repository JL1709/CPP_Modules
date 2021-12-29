/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 10:51:50 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample( float const f ) : pi(f), qd(42){
	
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void){
	
	std::cout << "Destructor called for instance1" << std::endl;
}

/*
A function becomes const when the const keyword is used in the function's declaration.
The idea of const functions is not to allow them to modify the object on which 
they are called. It is recommended the practice to make as many functions const 
as possible so that accidental changes to objects are avoided
*/
void	Sample::bar(void) const {
	
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	
	//this->qd = 0; --> not allowed, since we have a const member function
	
	return ;
}
