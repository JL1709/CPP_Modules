/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:44:37 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 13:42:20 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include <iostream>

#define ZOO 10

int main(void)
{
	Animal *zoo[ZOO];

	for (int i = 0; i < ZOO; i++)
	{
		if (i < ZOO / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	Dog	copy(*(Dog *)zoo[4]);
	for (int i = 0; i < 100; i++)
	{
		std::cout << copy.getBrain()->getIdeas(i) << "   ";
		std::cout << ((Dog *)zoo[4])->getBrain()->getIdeas(i) << std::endl;
	}

	for (int i = 0; i < ZOO; i++)
		delete (zoo[i]);

	return (0);
}