/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_templates.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 08:56:37 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 09:41:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MACRO OF C: everything starting with a # is a Macro, instruction for Pre-Processor.*/
#include <iostream>

template <typename T>
T const &max(T const &x, T const &y){        //1)global T: Type instead of int; it could be the instance of any class! 2) &:save lotof memory! 3)Const:always better
    return (x>=y ? x:y);
}

int foo(int x)
{
    std::cout<< "Long computing time." << std::endl;
    return x;
}

int main()
{
    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>(a,b) << std::endl;    //explicit instanciation
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a,b) << std::endl;     //implicit instanciation
    
    float c = -1.7f;
    float d = 4.2f;

    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl;    //explicit instanciation
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c,d) << std::endl;     //implicit instanciation
    
    char e = 'a';
    char f = 'z';

    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max<char>(e, f) << std::endl;    //explicit instanciation
    std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max(e,f) << std::endl;     //implicit instanciation

    //No problem here
    int ret = max<int>(foo(a), foo(b)); //explicit instanciation
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << ret << std::endl;
    return (0);
}


