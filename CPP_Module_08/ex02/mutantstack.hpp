/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:26:30 by julian            #+#    #+#             */
/*   Updated: 2022/02/09 10:58:54 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template< typename T>
class MutantStack : public std::stack<T>
{	
	public:
		MutantStack() : std::stack<T>() {}
		~MutantStack() {}
		MutantStack(MutantStack const &rhs) : std::stack<T>(rhs) {*this = rhs;}
		
		MutantStack	&operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator						iterator;
		typedef typename std::stack<const T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator				reverse_iterator;
		typedef typename std::stack<const T>::container_type::const_reverse_iterator	const_reverse_iterator;
		
		iterator				begin(void)			{return (this->c.begin());}
		iterator				end(void)			{return (this->c.end());}
		const_iterator			begin(void) const	{return (this->c.begin());}
		const_iterator			end(void) const		{return (this->c.end());}
		reverse_iterator		rbegin(void)		{return (this->c.rbegin());}
		reverse_iterator		rend(void)			{return (this->c.rend());}
		const_reverse_iterator	rbegin(void) const	{return (this->c.rbegin());}
		const_reverse_iterator	rend(void) const	{return (this->c.rend());}
};
