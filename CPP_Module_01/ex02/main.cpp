/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:00:09 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 09:17:41 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str       " << &str << std::endl;
	std::cout << "strPTR    " << stringPTR << std::endl;
	std::cout << "strREF    " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "strPTR    " << *stringPTR << std::endl;
	std::cout << "strREF    " << stringREF << std::endl;
	return (0);
}
