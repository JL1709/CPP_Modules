/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:55:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 08:37:32 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	
	public:
		ScavTrap(std::string const name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		
		ScavTrap	&operator=(ScavTrap const &rhs);

		void		attack(std::string const &target);
		void		guardGate(void);
};