/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_dynamic_casting.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:09:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 22:39:35 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//made during runtime, and not compilation like the other castings
//only work with polymorphic instances, so have to deal subtype polymorphismus -> at least one of members should be virtual

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent    {public: virtual ~Parent(){}};
class Child1 : public Parent {};
class Child2 : public Parent {};

int main()
{
    Child1  a;              //Reference value
    Parent * b = &a;        //Implicit upcast -> ok

    //Explicit downcast using pointer -> suspend ..
    Child1 * c = dynamic_cast<Child1 *>(b);
    if (c == NULL){
        std::cout << "Conversion is NOT Ok" << std::endl;
    }
    else {
        std::cout << "Conversion is Ok" << std::endl;   //  --> OK
    }

    //Explicit downcast using reference-> supend..
    try{
        Child2 & d = dynamic_cast<Child2 &>(*b);    //unreferencing
        std::cout << "Conversion is Ok" << std::endl;
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Conversion is NOT Ok: " << bc.what() << std::endl; //    --> KO
        return (0);
    }
    return (0);
}