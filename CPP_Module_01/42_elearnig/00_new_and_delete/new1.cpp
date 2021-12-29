/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:12:42 by jludt             #+#    #+#             */
/*   Updated: 2021/12/07 13:21:06 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:
		std::string	_login;
	public:
		Student(std::string login) : _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std:: endl;
		}
		~Student()
		{
			std::cout << "Stundet " << this->_login << " died" << std:: endl;
		}
};

int main(void)
{
	Student	bob = Student("bfubar");		//student allocated on the stack in a static way like a normal variable
	Student	*jim = new Student("jfubar");	//stundet allocated on the heap in a dynamic way. needs to be deleted in the end
	
	//do some stuff here

	delete jim;								//jim is detroyed
	
	return (0);
}