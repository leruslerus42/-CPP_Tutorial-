/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:10:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Try to use internal PRIVATE, implementation details that have nothing to do with user
//Use public just the strictly necessary vars/methods

//ES. HOW COMPUTERWORKS -> Private
//ES. WHAT YOU SEE FROM COMPUTER (bash, programs)-> Public

#include <iostream>
#include "header.hpp"

int main(void)
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "TEST: " << instance.publicFoo <<std::endl;

	instance.publicBar();
	//instance.privateBar();
	return (0);
}