/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 12:55:01 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &src);
		
		Dog	&operator=(Dog const &rhs);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};