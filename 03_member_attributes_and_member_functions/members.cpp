/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   members.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:47:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/07 12:53:42 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

int main()
{
	Sample instance;

	instance.foo = 42;

	std::cout << "instance.foo " << instance.foo << std::endl;
	instance.bar();

	return (0);
}