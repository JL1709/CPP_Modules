/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract_classes_and_interfaces.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:49:03 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 17:33:00 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter												//convention to use prefix "A" to show class is abstract
{
	private:
		std::string		_name;									//works but can't be instantiated. Only a Warrior will be able to have this attribute
	
	public:
		virtual void	attack(std::string const &target) = 0;	// "=0" logically means, that there is no definition for this method (a method is a virtual function)
																// "=0" make it a pure function/method with 2 consequences:
																// 1) the method can't be implemented -> consequence: we can't instantiate the class, meaning the class will have a behaviour that is missing
																// 2) a Character itself doesn't have an attack(), it is just a way of factorizing some behaviour.
																//		It says that all the children classes must have the attack() behaviour, even though the mother class doesn't have it
		void			sayHello(std::string const &target);
};

class Warrior : public ACharacter
{
	public:
		virtual void	attack(std::string const &target);
};

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << "!" << std::endl; 
};

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl; 
}

// class	ICoffeeMaker										//if a class has just abstract behaviour, we are creating an interface -> prefix "I"
// 															//interfaces can't have attributes
// 															//interfaces are interfaces to use with derived objects (child classe), which means they define a behaviour of child classes
// {
// 	public:
// 		virtual void	fillWaterSource(IWaterSource *src) = 0;
// 		virtual ICoffee	*makeCoffee(std::string const &type) = 0;
// };

int main(void)
{
	ACharacter	*a = new Warrior();

	//This would NOT be ok because ACHaracter is abstract
	//ACharacter	*b = new ACharacter();

	a->sayHello("students");
	a->attack("students");
}