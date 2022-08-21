/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_Vertex.class.tpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:06:06 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 10:26:51 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

//Vertex.class.tpp : name convention for templates
template < typename T = float >
class Vertex{

	public:
		Vertex(T const &x, T const &y, T const &z): _x(x), _y(y), _z(z) {}
		~Vertex(){}
	
		T const &getX() const {return this->_x;}
	    T const &getY() const {return this->_y;}
	    T const &getZ() const {return this->_z;}
	
	//etc
	private:

		T const _x;
		T const _y;
		T const _z;
	
		Vertex();
};


template <typename T>
std::ostream &operator<<(std::ostream &o, Vertex<T> const &v){	//take as parameter instance of the Vertex class
	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed);
	o << "Vertex( ";
	o << v.getX() << ", " << v.getY() << ", " << v.getX() << " )";
	return o;
}


