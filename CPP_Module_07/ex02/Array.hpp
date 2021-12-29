/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:08:23 by jludt             #+#    #+#             */
/*   Updated: 2021/12/23 16:06:49 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename  T >
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	
	public:
		Array(void) : _size(0) {_array = new T[0];}				// create empty array
		Array(unsigned int n) : _size(n) {_array = new T[n];}	// create array of n elements, initialized by default
		~Array(void) {delete [] this->_array;}
		Array(Array const & src) 
		{
			this->_array = new T[src.size()];
			this->_size = src._size;
			for (unsigned int i = 0; i < src.size(); i++)
				this->_array[i] = src[i];
		}
		
		Array	&operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				this->~Array();
				this->_array = new T[rhs.size()];
				this->_size = rhs._size;
				for (unsigned int i = 0; i < rhs.size(); i++)
					this->_array[i] = rhs[i];
			}
			return (*this);
		}

		T	operator[](int i) const
		{
			if (i < 0 || i >= static_cast<int>(this->size()))
				throw outOfLimitException();
			return (this->_array[i]);
		}

		T	&operator[](int i)
		{
			if (i < 0 || i >= static_cast<int>(this->size()))
				throw outOfLimitException();
			return (this->_array[i]);
		}
		
		unsigned int	size(void) const {return (this->_size);}

		class outOfLimitException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error...out of array limits!!!");
				}
		};
};