/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:53:47 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/15 11:07:55 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//ex. 1
class Animal {
	
}

class Cat : public Animal {
	
}

class Phony : public Animal {
	
}

//ex. 2

class Quadruped {
	private:	//accessible just from quadruped class

	protected: //accessible just from obj quadruped or childs

	public:	//accessible everywhere
}

class Dog: public Quadruped {
	//can access  protected and public members
}


Note
1) Encapsulation levels of ihneritance: All attribute ihnerited from mother class would not keep same level of encapsulation in childrens class.
2) Multiple ihneritance: (Diamond heritage) if a motherclass (quadruped) define same behaviour that the other motherclass (Animal) already have for our class dog ->undefined