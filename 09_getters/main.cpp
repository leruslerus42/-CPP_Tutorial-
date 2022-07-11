/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:54:40 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

int main(void)
{
	Sample instance;

	std::cout << "Foo: " << instance.getFoo() << std::endl;

	instance.setFoo(33);
	std::cout << "Foo: " << instance.getFoo() << std::endl;

	instance.setFoo(-33);//condition no negativ numbers in setter
	std::cout << "Foo: " << instance.getFoo() << std::endl;

	return (0);
}