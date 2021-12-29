/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 15:15:14 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0){
	
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void){
	
	std::cout << "Destructor called" << std::endl;
}

void	Sample::bar(void) const{
	
	std::cout << "Member function bar called" << std::endl;
}