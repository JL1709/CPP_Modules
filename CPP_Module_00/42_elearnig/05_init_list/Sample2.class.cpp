/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:47:18 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 09:59:58 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

/*
Initialization list:
After the the list of parameters in the definition of the constructor add ":"
followed by syntax groups to initialize attributes
*/

Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {
	
	std::cout << "Constructor called for instance2" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

}

Sample2::~Sample2(void){
	
	std::cout << "Destructor called for instance2" << std::endl;
}
