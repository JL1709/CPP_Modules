/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:33:11 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 10:47:12 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	
	public:
		ClapTrap(void);										//canonicla form: default constructor
		ClapTrap(std::string const name);
		~ClapTrap(void);									//canonicla form: destructor
		ClapTrap(ClapTrap const &src);						//canonicla form: copy constructor
		
		ClapTrap		&operator=(ClapTrap const &rhs);	//canonicla form: assignation operator

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};
