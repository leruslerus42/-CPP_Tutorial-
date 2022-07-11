/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:06:16 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H

class Sample
{
private:

	int		_privateFoo;
	
	void	_privateBar(void) const; //good convetions for prviate vars: _
	
public:

	int 	publicFoo;

	Sample();
	~Sample();

	void publicBar(void) const;


};



#endif