/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_classes.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:41:27 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 10:45:45 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// imbricated (geschuppt) bzw. nested classes means, that we can define a class
// in the definition of another class (it'll be used like a namespace)

class Cat
{
	public:
	class Leg
	{
		//[...]
	};
};

class Dog
{
	public:
	class Leg
	{
		//[...]
	};
};

int main(void)
{
	Cat			somecat;
	Cat::Leg	somecatsLeg;

	return (0);
}