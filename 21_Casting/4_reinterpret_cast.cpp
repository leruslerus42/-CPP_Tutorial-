/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_reinterpretate_cast.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 22:57:29 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 23:03:21 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It is purely a compile-time directive which instructs the compiler to treat expression as if it had the type new-type. 

#include <iostream>

int main()
{
    float a = 420.042f;                      //reference value

    void * b = &a;                          //implicit promotion -> ok
    int * c = reinterpret_cast<int *>(b);   //explicit demotion -> ok, i obey
    int & d = reinterpret_cast<int &>(b);   //explicit demotion -> ok, i obey
    return (0);
}