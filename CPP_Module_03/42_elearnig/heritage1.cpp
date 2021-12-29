/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:45:47 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 08:52:28 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat
{
	private:
		int		_numberOfLegs;
	
	public:
		Cat();
		Cat(Cat const &);
		Cat	&operator=(Cat const &);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const &target);
};

class Pony
{
	private:
		int		_numberOfLegs;
	
	public:
		Pony();
		Pony(Pony const &);
		Pony	&operator=(Pony const &);
		~Pony();

		void	run(int distance);
		void	doMagic(std::string const &target);
};