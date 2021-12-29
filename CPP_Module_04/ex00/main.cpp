/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:44:37 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 12:24:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongAnimal.hpp"
#include "ClassWrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongc = new WrongCat();
	
	std::cout << std::endl;
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrongc->getType() << " " << std::endl;
	
	std::cout << std::endl;
	
	dog->makeSound();									//will output the dog sound!
	cat->makeSound();									//will output the cat sound!
	meta->makeSound();									//will output "Undefined animal sound"!
	wrongc->makeSound();								//will output the wrongAnimal sound!
	
	std::cout << std::endl;

	delete (meta);
	delete (dog);
	delete (cat);
	delete (wrongc);

	return (0);
}