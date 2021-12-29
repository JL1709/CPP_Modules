/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:52:59 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

//classes are private by default

class Sample2 {

public:

	int		foo;

	Sample2(void);
	~Sample2(void);

	void	bar2(void) const;

};

#endif