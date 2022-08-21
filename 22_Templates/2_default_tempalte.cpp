/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_default_tempalte.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:19:40 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 10:27:04 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "2_Vertex.class.tpp"

int main()
{
    Vertex<int> v1( 12, 23, 34);
    Vertex<>    v2( 12, 23, 34);        //use default type, so ->float(template line 17)
	
    std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
	return 0;
}