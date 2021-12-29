/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/11/24 17:16:02 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {
	
public:

	int		foo;		//member attribute
	
	Sample(void);		//constructor
	~Sample(void);		//destructor

	void	bar(void);	//member function
};

#endif