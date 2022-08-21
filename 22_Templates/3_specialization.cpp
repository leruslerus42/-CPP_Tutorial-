/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_specialization.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:29:45 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 11:09:32 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*You can write more version of your template, based on the behaviour you want it will assume*/
#include <iostream>
#include "3_Pair.class.tpp"

int main()
{
    Pair<int, int>              p1(4, 2);                       //partial specialization
    Pair<std::string, float>    p2(std::string("Pi"), 3.14f);   //generic
    Pair<float, bool>           p3(4.2, true);                  //any specialization available, so will be used the generic
    Pair<bool, bool>            p4(true, false);                //full specialization
    
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;       //used 2nd << operator, my bool will appear as 1 and not true
    std::cout << p4 << std::endl;

    return 0;
}