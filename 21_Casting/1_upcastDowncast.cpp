/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_upcastDowncast.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:25:36 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 20:02:19 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent {};
class Child1 : public Parent{};
class Child2 : public Parent{};


// *************************************************************************** //

int main()
{
    Child1 a;                       //reference value

    Parent * b = &a;                //implicit 'reinterpretation' casting
    Parent * c = (Parent *) &a;     //explicit 'reinterpreation' casting

    Parent * d = &a;                //implicit upcast -> ok
    //Child1 * e = d;                 //implicit downcast -> hell, no
    Child2 * f = (Child2 *) d;      //explicit downcast -> ok, but rlly?
    return (0);
}

// *************************************************************************** //
