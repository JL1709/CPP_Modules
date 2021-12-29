/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:19:41 by jludt             #+#    #+#             */
/*   Updated: 2021/12/09 11:43:33 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(void)
{
	std::ifstream	ifs("numbers");							//input file stream. read from file numbers
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();											//close stream bzw. file

	//-----------------------------------------------

	std::ofstream	ofs("test.out");						//output file stream
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();

	return (0);
}