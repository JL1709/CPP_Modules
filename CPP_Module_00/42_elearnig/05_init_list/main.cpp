/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:04:01 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 09:54:27 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int	main(void){
	
	Sample1 instance1('a', 42, 4.2f);
	Sample2 instance2('z', 21, 3.14f);
	
	return (0);
}