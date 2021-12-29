/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:03:33 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 19:13:21 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("noName", "noTarget", 42, 42)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::justDoIt(void) const
{
	std::ofstream	outFile;
	outFile.open(this->getTarget() + "_shrubbery", std::ios_base::app);
	if (outFile.good() == false)
	{
		std::cout << "Error with outfile" << std::endl;
		exit(-1);
	}
	outFile << \
	"    ###     " << std::endl << \
    "   #o###    " << std::endl << \
    " #####o###  " << std::endl << \
   	"#o#\\#|#/###" << std::endl << \
    " ###\\|/#o# " << std::endl << \
    "#   }|{  #  " << std::endl << \
    "    }|{     " << std::endl;
	outFile.close();
}