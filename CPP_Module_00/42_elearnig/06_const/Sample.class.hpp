/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 10:35:06 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	
public:

	float const	pi;
	int			qd;

	Sample(float const f);
	~Sample(void);

	void	bar( void ) const;

};

#endif