/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_typing_polymorphism1.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:24:12 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 10:36:36 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Character
{
	public:
		void	sayHello(std::string const &target);
};

class Warrior : public Character
{
	public:
		void	sayHello(std::string const &target);
};

class Cat
{
	//[...]
};

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
	//This is OK, obviously, Warrior IS a Character
	Warrior		*a = new Warrior();

	//This is also OK because Warrior IS a Character
	Character	*b = new Warrior();

	//This would NOT be ok because Character IS NOT a Warrior
	//(Although they ARE related, and W IS a C, the reverse is untrue)
	//Warrior	*c = new Character();

	//This would NOT be ok either because Cat IS NOT a Character
	//(They are not even related)
	//Character	*d = new Cat();

	a->sayHello("student");
	b->sayHello("student");

	return (0);
}