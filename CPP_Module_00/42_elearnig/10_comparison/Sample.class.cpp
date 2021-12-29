/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 14:41:56 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(int v) : _foo(v){
	
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void){
	
	std::cout << "Destructor called for instance" << std::endl;
}

int	Sample::getFoo(void) const {
	
	return (this->_foo);
}

int	Sample::compare(Sample * other) const {
	
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
