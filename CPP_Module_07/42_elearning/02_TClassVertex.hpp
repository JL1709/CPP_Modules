/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TClassVertex.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:48:49 by julian            #+#    #+#             */
/*   Updated: 2021/12/22 16:09:21 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float >							// default type = float
class Vertex
{
	public:
		Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
		~Vertex(void) {}

		T const &	getX(void) const {return this->_x;}
		T const &	getY(void) const {return this->_y;}
		T const &	getZ(void) const {return this->_z;}
		
		// Etc...

	private:
		T const _x;
		T const _y;
		T const _z;

		Vertex(void);
};

template< typename T>
std::ostream &	operator<<(std::ostream & o, Vertex< T > const & v)
{
	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed);
	o << "Vertex(";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << ")";
	return (o);
}