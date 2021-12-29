/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:12:42 by jludt             #+#    #+#             */
/*   Updated: 2021/12/07 18:28:57 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:
		std::string	_login;
	public:
		Student() : _login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std:: endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std:: endl;
		}
};

int main(void)
{
	Student	*students = new Student[42];			//create 42 students on the heap
	
	//do some stuff here

	delete [] students;								//delete all students
	
	return (0);
}