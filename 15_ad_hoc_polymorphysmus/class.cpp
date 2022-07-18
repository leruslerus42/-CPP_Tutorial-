/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:04:23 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/13 08:01:14 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <iostream>

Integer::Integer() (int const n): _n(n){
	std::cout << "Constructor called with value" << std::endl;
}

Sample::~Sample(){
	std::cout << "Decostructor called with value" << std::endl << std::endl;
}


int	Integer::getValue()const{
	return this->_n;
}

Integer & Integer::operator-(Integer const & rhs)
{
	std::cout << "Assignation operator called with " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return (*this);
}

Intgeger Integer::operator+(Integer const & rhs) const {
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return (Integer(this->_n + rhs.getValue()));
}

std::ostream & operator<<(std::ostram & o, Integer const & rhs){
	o << rhs.getValue();
	return o;
}





