/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_const_casting.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:02:17 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 23:07:34 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//for trasnformation of qualifier
int main()
{
    int a = 42;                        //reference value

    int const * b = &a;              //implicit promotion -> ok
    //int * c = b;                   //implicit demotion -> hell no
    int * d = const_cast<int *>(b);  //explicit demotion -> ok, i obey
    return (0);
}