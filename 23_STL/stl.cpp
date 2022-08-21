/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:20:16 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/09 00:37:20 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
STL: Standard Template Library; contains:
- containers:generic template container able to contain anything
- algorithm enabling to make operations in collections (that could be a standard container or STL or one you made it alone)
*/

/*
ITERATOR: STL equivalent of pointers, works the same way
            can be used for lists, maps etc.
*/
/*
MAP: c++ version of hash table, the dictionary associated with array; we dont have to use strings as keys for our value, but whatever we want
*/
/*
VECTOR: similar to array, able to contain exactly what we need
*/
#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main()
{
    std::list<int>                      lst1;
    std::map<std::string, IOperation*>  map1;
    std::vector<int>                    v1;
    std::vector<int>                    v2(42, 100);//create 42 entries containing 100 by default

    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);


    //map1["opA"] = new OperationA;
    //map1["opB"] = new OperationB;

    std::list<int>::const_iterator  it;              //should not be const by default
    std::list<int>::const_iterator   ite = lst1.end(); //is a value meaning we are over the last element; is a value u can use to compare with your first iterator

    for (it=lst1.begin(); it != ite; ++it)
    {
        std::cout << *it << std::endl;
    }
    return (0);
}

/*doesnt compile, operation not implemented*/