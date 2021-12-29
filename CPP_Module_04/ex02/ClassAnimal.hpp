/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 13:40:38 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string const srcType);
		virtual ~Animal(void);
		Animal(Animal const &src);
		
		Animal	&operator=(Animal const &rhs);

		std::string		getType(void) const;

		virtual	void	makeSound(void) const = 0;
};