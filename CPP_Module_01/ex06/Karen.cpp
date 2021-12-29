/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:28:34 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 09:49:31 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

enum stringCode {
	eDebug,
	eInfo,
	eWarning,
	eError,
	eNotFound
};

stringCode hashIt(std::string const& level) 
{
	if (level == "DEBUG")
		return (eDebug);
	if (level == "INFO")
		return (eInfo);
	if (level == "WARNING")
		return (eWarning);
	if (level == "ERROR")
		return (eError);
	return (eNotFound);
}

void Karen::complain(std::string level)
{
	void	(Karen::*f[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	switch (hashIt(level))
	{
		case eDebug:
			(this->*f[eDebug])();
		case eInfo:
			(this->*f[eInfo])();
		case eWarning:
			(this->*f[eWarning])();
		case eError:
			(this->*f[eError])();
		case eNotFound:
			break;
	}
}
