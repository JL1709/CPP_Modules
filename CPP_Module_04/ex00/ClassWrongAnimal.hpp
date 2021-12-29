/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:19:50 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 14:31:31 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string src);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		
		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string		getType(void) const;

		void	makeSound(void) const;
};