/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/24 17:23:57 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

//Define constructor of class Sample
//The constructor has no return value
Sample::Sample(void){
	
	std::cout << "Constructor called" << std::endl;
}

//Define destructor of class Sample
//The destructor has no return value
Sample::~Sample(void){
	
	std::cout << "Destructor called" << std::endl;
}

//Define member function of class Sample
void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}
