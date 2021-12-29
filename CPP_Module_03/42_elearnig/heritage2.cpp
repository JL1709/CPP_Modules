/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:45:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 08:55:18 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal
{
	private:
		int		_numberOfLegs;
	
	public:
		Animal();
		Animal(Animal const &);
		Animal	&operator=(Animal const &);
		~Animal();

		void	run(int distance);
		void	call();
		void	eat(std::string const &what);
		void	walk(int distance);
};

class Otter : public Animal
{
	public:
		Otter();
		Otter(Otter const &);
		Otter	&operator=(Otter const &);
		~Otter();
};

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &);
		Cat	&operator=(Cat const &);
		~Cat();

		void	scornSomeone(std::string const &target);
};

class Pony : public Animal
{
	public:
		Pony();
		Pony(Pony const &);
		Pony	&operator=(Pony const &);
		~Pony();

		void	doMagic(std::string const &target);
		void	run(int distance);					//also possibile if e.g. pony has a specific way of running that will replace the run of Animal
};