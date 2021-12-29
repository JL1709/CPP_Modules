/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_streams.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:50:10 by julian            #+#    #+#             */
/*   Updated: 2021/10/29 11:54:25 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	
	char	buff[512];
	
	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	
	return (0); 
}