/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:53:55 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

Sample::Sample(){
	std::cout << "Constructor called" << std::endl;

	this->_foo = _foo;
}

Sample::~Sample(){
	std::cout << "Decostructor called" << std::endl << std::endl;
}

int Sample:: getFoo() const{
	std::cout << "Foo = " << this->_foo << std::endl;
	return this->_foo;
}

void Sample:: setFoo(int v){
	if (v >= 0)
		this->_foo = v;
}







