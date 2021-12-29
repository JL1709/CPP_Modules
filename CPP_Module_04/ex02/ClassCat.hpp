/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 12:14:18 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClassAnimal.hpp"
# include "ClassBrain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const &src);
		
		Cat	&operator=(Cat const &rhs);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};