/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:43:20 by julian            #+#    #+#             */
/*   Updated: 2021/12/20 16:20:27 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Bureaucrat;

class Form
{
	private:
		Form(void);

		const std::string	_name;
		bool				_signed;
		const int			_requiredGradeToSigne;
		const int			_requiredGradeToExecute;
	
	public:
		Form(std::string name, int signe, int execute);
		Form(Form const &src);
		Form	&operator=(Form const &rhs);
		~Form(void);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getRequiredGradeToSign(void) const;
		int			getRequiredGradeToExecute(void) const;

		void		beSigned(Bureaucrat &src);

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

std::ostream &	operator<<(std::ostream &o, Form const &i);