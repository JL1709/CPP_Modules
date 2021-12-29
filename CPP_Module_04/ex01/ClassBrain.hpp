/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:30:07 by julian            #+#    #+#             */
/*   Updated: 2021/12/16 12:19:12 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Brain
{
	protected:
		std::string		ideas[100];
	
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);

		Brain	&operator=(Brain const &rhs);
		
		std::string	getIdeas(int i) const;
};