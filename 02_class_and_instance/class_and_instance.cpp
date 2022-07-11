/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_and_instance.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:28:27 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/07 12:41:22 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
}

int main()
{
	Sample instance;

	return (0);
}