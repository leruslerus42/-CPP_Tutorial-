/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparison.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 07:48:46 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

Sample::Sample(){
	std::cout << "Constructor called" << std::endl;
	Sample::_numberInst ++;
}

Sample::~Sample(){
	std::cout << "Decostructor called" << std::endl << std::endl;
	Sample::_numberInst --;
}

int Sample:: getNumberInst(void){
	return (Sample::_numberInst);
}

int	Sample::_numberInst = 0;	//only way to initialize non member attribute, static





