/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:14:44 by jludt             #+#    #+#             */
/*   Updated: 2021/12/10 13:07:11 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample
{
	public:
		Sample(void);									//canonical form: Default constructor
		Sample(int const n);
		Sample(Sample const & src);						//canonical form: copy constructor -> new instance gets created
		~Sample(void);									//canonical form: destructor

		Sample &	operator=(Sample const & rhs);		//canonical form: assignment operator -> current instance gets updated

		int		getFoo(void) const;

	private:
		int		_foo;
};

std::ostream &	operator<<(std::ostream & o, Sample const & i);

#endif