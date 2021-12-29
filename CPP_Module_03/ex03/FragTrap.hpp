/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 10:55:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/15 09:08:50 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
	
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		~FragTrap(void);
		FragTrap(FragTrap const &src);
		
		FragTrap	&operator=(FragTrap const &rhs);

		void		highFivesGuys(void);
};