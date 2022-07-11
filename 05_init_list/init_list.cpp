/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:56:34 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 22:54:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

//BAD PATTERN
// Sample::Sample(char p1, int p2, float p3){
// 	std::cout << "Constructor called" << std::endl;

// 	this->a1 = a1;
// 	std::cout << "this->a1 = " << this->a2 << std::endl;

// 	this->a2 = a2;
// 	std::cout << "this->a2 = " << this->a2 << std::endl;

// 	this->a3 = a3;
// 	std::cout << "this->a3 = " << this->a3 << std::endl;
// 	return ;
// }


//SYNTAX: INTIALIZATION LIST
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	std::cout << "Constructor calles" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
}
