/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:56:34 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/07 23:14:31 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this.foo: " << this->foo << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
}

void Sample::bar(void){
	std::cout << "Member function bar called";
	return ;
}

// int main()
// {
// 	Sample instance;

// 	//this->foo = 42;

// 	std::cout << "instance.foo " << instance.foo << std::endl;
// 	instance.bar();

// 	return (0);
// }