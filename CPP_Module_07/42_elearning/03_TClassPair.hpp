/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_TClassPair.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:20:04 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 17:07:53 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

template< typename T, typename U >
class Pair
{
	public:
		Pair< T, U >(T const & lhs, U const & rhs) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Generic template" << std::endl;
		}
		
		~Pair< T, U >(void) {}

		T const &	first(void) const	{return this->_lhs;}
		U const &	second(void) const	{return this->_rhs;}

	private:
		T const &	_lhs;
		U const &	_rhs;

		Pair< T, U >(void);
};

/* ************************************************************************** */
// partial specialization

template< typename U >
class Pair< int, U >
{
	public:
		Pair< int, U >(int lhs, U const & rhs) : _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Int partial specialization" << std::endl;
		}
		
		~Pair< int, U >(void) {}

		int			first(void) const	{return this->_lhs;}
		U const &	second(void) const	{return this->_rhs;}

	private:
		int			_lhs;
		U const &	_rhs;

		Pair< int, U >(void);
};

/* ************************************************************************** */
// full specialization

template<>
class Pair< bool, bool >
{
	public:
		Pair< bool, bool >(bool lhs, bool rhs)
		{
			std::cout << "Bool/bool specialization" << std::endl;
			this->_n = 0;
			this->_n != static_cast<int>(lhs) << 0;
			this->_n != static_cast<int>(rhs) << 1;
		}
		
		~Pair< bool, bool >(void) {}

		bool	first(void) const	{return (this->_n & 0x01);}
		bool	second(void) const	{return (this->_n & 0x02);}

	private:
		int		_n;

		Pair< bool, bool >(void);
};

/* ************************************************************************** */

template< typename T, typename U >
std::ostream &	operator<<(std::ostream & o, Pair< T, U > const & p)
{
	o << "Pair( " << p.first() << ", " << p.second() << " )";
	return (o);
}

std::ostream &	operator<<(std::ostream & o, Pair< bool, bool > const & p)
{
	o << std::boolalpha << "Pair( " << p.first() << ", " << p.second() << " )";
	return (o);
}
