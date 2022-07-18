/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:08:50 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 00:31:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*ABSTRACT CLASS-> There is no definition/implementation of method, because = 0.-> We can't instanciate the class, because a behaviour is missing.
Is a convention, not an obligation.
N.B. Btw ALL Children of Abstract Classes have then to implement this behaviour.
PERCIO-> Abstract Classes are ways to define some behaviours that will be then used by the childrens.

P.S. The attributes of an Abstract Class can just be used from the Child Class (Warrior in the case).
*/
class ACharachter
{
	private:
		std::string name;

	public:
		virtual void attack(std::string const &target) = 0;
		void	sayHello(std::string const &target);
};

class Warrior : public ACharachter
{
	public:
		virtual void attack(std::string const &target);
};

void ACharachter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !"<< std::endl;
}

void Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

/*
INTERFACE(begin with I)
They cannot have attributes. 
They are used to described how u use the objects u created.
Altro uso: Manipulating concret types of array of objects'.

DEFINITION
An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.
The C++ interfaces are implemented using abstract classes.
*/

// class ICoffeeMaker
// {
// 	public:
// 		virtual void fillWaterTank(IWaterSource *src) = 0;
// 		virtual ICoffee*	nakeCoffee(std::string const &type) = 0;
// };


int main()
{
	//OK
	ACharachter*	a = new Warrior();
	
	//KO, ACharachter is abstract
	//ACharachter*	b = new ACharachter();

	a->sayHello("students");
	a->attack("roger");
	
}