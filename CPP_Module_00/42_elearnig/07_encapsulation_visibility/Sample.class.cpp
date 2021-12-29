/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:28:59 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void){
	
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
}

Sample::~Sample(void){
	
	std::cout << "Destructor called for instance" << std::endl;
}

void	Sample::_privateBar(void) const {
	
	std::cout << "Member function privateBar called" << std::endl;

	return ;
}

void	Sample::publicBar(void) const {
	
	std::cout << "Member function publicBar called" << std::endl;

	return ;
}
