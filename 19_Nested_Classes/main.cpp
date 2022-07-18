/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:47:06 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 12:50:18 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//class inside another class
class Cat
{
	public:
	class Leg
	{
		//
	};
};

class Dog
{
	public:
	class Leg
	{
		//
	};
};


int main()
{
	Cat	cat;
	Cat::Leg cat_leg;
	return (0);
}