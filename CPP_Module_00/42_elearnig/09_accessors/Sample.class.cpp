/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 14:09:10 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void){
	
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo() " << this->getFoo() << std::endl;
}

Sample::~Sample(void){
	
	std::cout << "Destructor called for instance" << std::endl;
}

int	Sample::getFoo(void) const {
	
	return (this->_foo);
}

void	Sample::setFoo(int v){
	
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "number stays unchanged since number < 0" << std::endl;
		
	return ;
}
