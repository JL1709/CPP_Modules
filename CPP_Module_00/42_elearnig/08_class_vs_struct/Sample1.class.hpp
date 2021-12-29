/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:39:04 by julian            #+#    #+#             */
/*   Updated: 2021/11/25 13:53:15 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

//structs are public by default

struct Sample1 {

	int		foo;

	Sample1(void);
	~Sample1(void);

	void	bar1(void) const;

};

#endif