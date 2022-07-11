/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encapsulation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:42:11 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include "iostream"

Sample::Sample(){
	std::cout << "Constructor called" << std::endl;
	
	this->publicFoo = publicFoo;
	this->_privateFoo = _privateFoo;

	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	std::cout << "this->privateFoo = " << this->_privateFoo << std::endl;

	publicBar();
	_privateBar();
}

Sample::~Sample(){
	std::cout << "Decostructor called" << std::endl << std::endl;
}


void Sample::publicBar(void) const{

	std::cout << "Public Bar" << std::endl;
}

void Sample::_privateBar(void) const{
		std::cout << "Private Bar" << std::endl;
}

