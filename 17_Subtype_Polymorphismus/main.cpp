/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:51:44 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 00:08:22 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Character
{
	public:
		virtual void sayHello(std::string const &target);
};

class Warrior: public Character
{
	public:
		virtual void sayHello(std::string const &target);
};

class Cat
{
	//
};

void	Character::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << "!" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << "F*** off " << target << ", I don't like you!" << std::endl;
}

//VIRUTAL
//During compilation would be determined type and change the right method. So now 	Character* b = new Warrior(), will determine IS a Warrior and so print the Warrior Method and not the Charachter Method sayHello anymore!
//So VIRTUAL MEMBER FUNCTION is called METHOD: resolution will be dynamic during execution.

int main()
{
	//OK, Warrior is Warrior
	Warrior* a = new Warrior();

	//OK, Warrior is Charachter. Here the Warrior is acting as a Charachter, but IS and stay a Warrior -> virtual the linkage will be dynamic and not static
	Character* b = new Warrior();

	//KO, Charachter is not Warrior
	//Warrior* c = new Character;

	//KO, Cat is not Charachter
	//Character* d = new Cat();

	a->sayHello("students");
	b->sayHello("students");

}