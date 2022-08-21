/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_cast_operators.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:09:24 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/31 23:17:47 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//TYPECAST: allow to define classes specific operators in order to make implicit conversions.

class Foo{
    private:
        float _v;

    public:
        Foo(float const v) : _v(v){};

        float getV()    {return (this->_v);}
        
        operator float()    {return this->_v;}
        operator int()      {return static_cast<int> (this->_v);}
        
};

int main()
{
    Foo a(420.024f);    
    float b = a;
    int   c = a;

    std::cout << a.getV() << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    
    return (0);
}