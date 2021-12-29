/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 09:57:08 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

//naive approach to declare variables (but works)
//best practice is to use initializaion list --> see Sample2.class.cpp

Sample1::Sample1( char p1, int p2, float p3 ){
	
	std::cout << "Constructor called for instance1" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

}

Sample1::~Sample1(void){
	
	std::cout << "Destructor called for instance1" << std::endl;
}
