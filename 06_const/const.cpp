/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 02:33:41 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

Sample::Sample(float const f): pi(f), qd(42){
	std::cout << "Constructor called" << std::endl;
	
}

Sample::~Sample(){
	std::cout << "Decostructor called" << std::endl;
}

//CONSTANT: this member function wont alterate the current instance
void Sample::bar(void) const{

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	//this->qd = 0; cant change current instance
}

//THE MORE OF YOUR CODE IS CONST, THE MORE OF THE CODE WILL BE ROBUST IN LONG TERM
//SAVING HOURS OF DEBUGGING,