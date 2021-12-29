/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:06:48 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 17:55:54 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClassICharacter.hpp"
# include "ClassAMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materia[4];

		Character(void);
	
	public:
		Character(std::string const name);
		~Character(void);
		Character(Character const &src);
		Character	&operator=(Character const &rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
