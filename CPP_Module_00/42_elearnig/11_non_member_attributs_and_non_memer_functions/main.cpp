/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 15:01:46 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
}

void	f1(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();
}

int	main(void){
	
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return (0);
}