/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:12:54 by julian            #+#    #+#             */
/*   Updated: 2022/01/04 17:30:14 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _maxSize(N), _currentSize(0)
{
}

Span::~Span(void)
{
}

Span::Span(Span const &src)
{
	this->_storedInts = src._storedInts;
	this->_maxSize = src._maxSize;
	this->_currentSize = src._currentSize;
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_storedInts = rhs._storedInts;
		this->_maxSize = rhs._maxSize;
		this->_currentSize = rhs._currentSize;
	}
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (this->_currentSize == this->_maxSize)
		throw Span::FullException();
	this->_storedInts.push_back(nbr);
	this->_currentSize++;
}

void	Span::addNumber(std::vector<int>::iterator const &first, std::vector<int>::iterator const &last)
{
	
	unsigned int size = std::distance(first, last);
	if (size > this->_maxSize)
		throw Span::FullException();
	this->_storedInts.insert(this->_storedInts.end(), first, last);
	this->_currentSize += size;
}

int		Span::shortestSpan(void)
{
	if (this->_currentSize < 2)
		throw Span::NoSpanException();
	int	minSpan;
	std::vector<int> copy = this->_storedInts;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size(); ++i)
	{
		if (i + 1 != copy.size())
		{
			if (i == 0)
				minSpan = copy[i + 1] - copy[i];
			else
			{
				if (copy[i + 1] - copy[i] < minSpan)
					minSpan = copy[i + 1] - copy[i] < minSpan;
			}
		}
	}
	return (minSpan);
}

int		Span::longestSpan(void)
{
	if (this->_currentSize < 2)
		throw Span::NoSpanException();
	int max = *std::max_element(this->_storedInts.begin(), this->_storedInts.end());
	std::vector<int>::iterator min = std::min_element(this->_storedInts.begin(), this->_storedInts.end());	// iterators are positions not values!
	
	return (max - *min);	// to convert from a position to a value, an iterator must be dereferenced!
}

const char	*Span::FullException::what() const throw()
{
	return ("Object is full!");
}

const char	*Span::NoSpanException::what() const throw()
{
	return ("No span to find!");
}