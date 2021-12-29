/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 08:50:28 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 08:57:29 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Form;

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &src);
		Intern	&operator=(Intern const &rhs);

		Form	*makeForm(std::string nameOfForm, std::string targetForForm);
};