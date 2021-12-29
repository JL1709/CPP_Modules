/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:50:53 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 09:18:57 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include "ClassICharacter.hpp"

class AMateria
{
	protected:
		std::string	type_;

	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		
		AMateria	&operator=(AMateria const &rhs);
		
		std::string const & getType() const;			//Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};