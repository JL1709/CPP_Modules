/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 11:12:43 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	
public:

	int		publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;

private:

	int		_privateFoo;

	void	_privateBar(void) const;

};

#endif