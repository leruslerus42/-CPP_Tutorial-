/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_explicit_keyword.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:18:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 23:28:39 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A{};
class B{};

class C{
    public:
        C(A const & _) {return;}                            //conversion form A to C Class(implicit)
        explicit C(B const & _) {return ;}                  //prevent implicit conversion of an instance 
};

void f(C const & _) {
    return ;
}
int main()
{
    f(A());                     //implicit conversion -> OK
    f(B());                    //implicit conversion NOT Ok, constructor is EXPLICIT
    return (0);
}