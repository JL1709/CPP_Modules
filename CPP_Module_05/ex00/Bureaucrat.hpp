/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:45:04 by julian            #+#    #+#             */
/*   Updated: 2022/02/07 14:37:03 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>

class Bureaucrat
{
	private:
		Bureaucrat(void);

		const std::string	_name;
		unsigned int		_grade;

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
	
		std::string		getName(void) const;
		int				getGrade(void) const;

		void	incrementGrade(void);
		void	decrementGrade(void);

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i);