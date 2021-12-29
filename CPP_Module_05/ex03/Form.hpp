/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:43:20 by julian            #+#    #+#             */
/*   Updated: 2021/12/21 09:54:26 by julian           ###   ########.fr       */
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
		const std::string	_target;
		bool				_signed;
		const int			_requiredGradeToSigne;
		const int			_requiredGradeToExecute;
	
	public:
		Form(std::string name, std::string target, int sign, int execute);
		Form(Form const &src);
		Form	&operator=(Form const &rhs);
		virtual ~Form(void);

		std::string		getName(void) const;
		std::string		getTarget(void) const;
		bool			getSigned(void) const;
		int				getRequiredGradeToSign(void) const;
		int				getRequiredGradeToExecute(void) const;

		void			beSigned(Bureaucrat &src);

		void			execute(Bureaucrat const &executor) const;
		virtual void	justDoIt(void) const = 0;

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

		class NotSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &	operator<<(std::ostream &o, Form const &i);