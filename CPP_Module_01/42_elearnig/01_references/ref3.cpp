/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:12:42 by jludt             #+#    #+#             */
/*   Updated: 2021/12/07 15:09:51 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:
		std::string	_login;
	public:
		Student(std::string const &login) : _login(login)
		{
		}

		std::string	&getLoginRef()
		{
			return (this->_login);
		}
		
		std::string const	&getLoginRefConst() const
		{
			return (this->_login);
		}

		std::string	*getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const	*getLoginPtrConst() const
		{
			return &(this->_login);
		}
		
};

int main(void)
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");
	
	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
	
	return (0);
}