/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:40:12 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 19:02:04 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClassIMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];
	
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &rhs);
	
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};