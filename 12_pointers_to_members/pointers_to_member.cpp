/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers_to_member.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 08:02:13 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

Sample::Sample() : foo(0){
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(){
	std::cout << "Decostructor called" << std::endl << std::endl;
}

void Sample:: bar(void) const{
	std::cout << "Member function bar called" << std::endl << std::endl;

}






