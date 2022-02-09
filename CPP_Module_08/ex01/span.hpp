/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:07:31 by julian            #+#    #+#             */
/*   Updated: 2022/02/09 09:42:42 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>
#include <iostream>

class Span
{
	private:
		Span(void);

		std::vector<int>	_storedInts;
		unsigned int		_maxSize;
		unsigned int		_currentSize;
	
	public:
		Span(unsigned int N);
		~Span(void);
		Span(Span const &src);
		Span &operator=(Span const &rhs);

		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator const &first, std::vector<int>::iterator const &last);

		int		shortestSpan(void);
		int		longestSpan(void);

		class FullException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};