/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 02:54:53 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//try to use so many const as possible -> very useful
//THE MORE OF YOUR CODE IS CONST, THE MORE OF THE CODE WILL BE ROBUST IN LONG TERM
//SAVING HOURS OF DEBUGGING,
#include <iostream>
#include "header.hpp"

int main(void)
{
	Sample instance(3.5);
	instance.bar();
}