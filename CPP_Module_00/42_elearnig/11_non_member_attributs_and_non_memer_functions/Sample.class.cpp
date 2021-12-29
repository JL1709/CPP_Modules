/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 15:03:44 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


Sample::Sample(void){
	
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
}

Sample::~Sample(void){
	
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
}

int	Sample::getNbInst(void){
	
	return (Sample::_nbInst);
}

//Initializing static or non-member attribute
int	Sample::_nbInst = 0;
