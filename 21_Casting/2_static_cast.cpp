/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_static_cast.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:48:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 20:08:57 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//5 castings: conversion, reinterpretation, type qualifier changes, up/downcast

//certain number of conversion as simple as possible, but also go on ihneritace tree.

int main()
{
    int     a = 42;     //reference value

    double  b = a;      //implicit promotion -> ok
//  int     c = b;      //implicit demotion -> hell, no
    int     d = static_cast<int>(b);   //explicit demotion -> ok, i obey
        
    return (0);
}

//  g++ -Wall -Werror -Wno-unused -Wconversion 
// *************************************************************************** //



/* static cast appliedto up/downcast */

//downcast in explicit way, need static cast in cpp

class Parent {};
class Child1 : public Parent{};
class Child2 : public Parent{};

class Unrelated {};

int main()
{
    Child1 a;                                       //reference value

    Parent * b = &a;                                //implicit upcast -> ok
//    Child1 * c = b;                               //implicit downcast -> hell no
    Child2 * d = static_cast<Child2 *>(b);          //explicit downcast -> ok, i obey

//    Unrelated * e = static_cast<Unrelated *>(&a); //explicit conversion -> hell no
 
    return (0);
}

// *************************************************************************** //
