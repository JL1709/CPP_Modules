/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:59:58 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 09:07:28 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped						//Can access name, run() and legs
{
	private:
		std::string		name;		//Accessible from aninstance of the class only
	
	protected:
		int				legs[4];	//Accessible from an instance of the class or an instance of a child class

	public:
		void			run();		//Accessible from anywhere
};

class Dog : public Quadruped		//Can access run() and legs
{
	
};

int main(void)						//Can only access run()
{
	return (0);
}