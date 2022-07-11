/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 22:52:17 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

//INSTANCE VS POINTER AN INSTANCE (Do i have a pointer to a member or to a member function?)

int main(void)
{
	Sample		instance;//allocate in stack
	Sample *	instance_p = &instance;//pointer as in c an particular typeSample, still in stack

	int			Sample::*p = NULL;			//pointer an integer member attribute of Sample class initialize to NULL
	void		(Sample::*f)(void) const;	//point an member function of class Sample
	
	p = &Sample::foo;	//Assign adresse of my attribute foo to a pointer.
	
	std::cout << "Value of member foo: " <<instance.foo << std::endl;			//here p or &foo is NULL
	instance.*p = 21;															//new vaule to the pointer; I updatet using the instance directly
	std::cout << "Value of member foo: " <<instance.foo << std::endl;
	instance_p->*p = 42;														//new value, using the pointer to my instance
	std::cout << "Value of member foo: " <<instance.foo << std::endl;

	f = &Sample::bar;	//point f to member function bar of Sample

	(instance.*f)();		//type specify which instance I use of
	(instance_p->*f)();		//fo line 21 pointer as es.
	
	return (0);
}