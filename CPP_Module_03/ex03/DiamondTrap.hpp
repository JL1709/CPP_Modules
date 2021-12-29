/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:47:20 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 09:48:50 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		_name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		
		DiamondTrap	&operator=(DiamondTrap const &rhs);

		void		attack(std::string const &target);
		void		whoAmI();
};