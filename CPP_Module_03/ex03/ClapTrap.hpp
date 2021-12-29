/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:33:11 by julian            #+#    #+#             */
/*   Updated: 2021/12/14 17:24:15 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	
	public:
		ClapTrap(void);										//canonical form: default constructor
		ClapTrap(std::string const name);
		~ClapTrap(void);									//canonical form: destructor
		ClapTrap(ClapTrap const &src);						//canonical form: copy constructor
		
		ClapTrap		&operator=(ClapTrap const &rhs);	//canonical form: assignation operator

		std::string		getName(void) const;

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};