/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:26:30 by julian            #+#    #+#             */
/*   Updated: 2022/01/05 12:15:24 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template< typename T>
class MutantStack : public std::stack<T>
{	
	public:
		MutantStack(void) : std::stack<T>() {};
		~MutantStack(void) {};
		MutantStack(MutantStack const &rhs) : std::stack<T>(rhs) {*this = rhs;};
		
		MutantStack	&operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}

		// typedefs for iterators and begin/end functions
		typedef typename std::stack<T>::container_type::iterator						iterator;
		iterator				begin(void)			{return (this->c.begin());}
		iterator				end(void)			{return (this->c.end());}
		
		typedef typename std::stack<const T>::container_type::const_iterator			const_iterator;
		const_iterator			cbegin(void) const	{return (this->c.cbegin());}
		const_iterator			cend(void) const	{return (this->c.cend());}
		
		typedef typename std::stack<T>::container_type::reverse_iterator				reverse_iterator;
		reverse_iterator		rbegin(void)		{return (this->c.rbegin());}
		reverse_iterator		rend(void)			{return (this->c.rend());}
		
		typedef typename std::stack<const T>::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator	crbegin(void) const {return (this->c.crbegin());}
		const_reverse_iterator	crend(void) const	{return (this->c.crend());}
};
