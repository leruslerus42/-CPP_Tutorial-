/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:37:52 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/09 01:27:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>
/*
ALGORITHM: Collection of functions/algorithms that are preiplemented and able
to operate on collections without previous precision and performing standard operations.

*/

void    displayInt(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(4);
	lst.push_back(17);
	lst.push_back(20);
	lst.push_back(10);

	for_each(lst.begin(), lst.end(), displayInt);//call a function on every element of the collection, instead of doing manually with the for as in stl.cpp
	return (0);	
}