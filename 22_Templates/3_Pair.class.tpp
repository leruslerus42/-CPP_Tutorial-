/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_Pair.class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:31:54 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/09 00:20:11 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template < typename T, typename U >
class Pair{

	public:
        Pair <T, U> (T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs){
            std::cout << "Generic template" << std::endl;
            return ;
        }
		~Pair<T, U>(){}
	
		T const &fst() const {return this->_lhs;}
	    U const &snd() const {return this->_rhs;}


	private:

		T const &_lhs;
		U const &_rhs;
	
		Pair<T, U>();
};


/********************************************************************************/

//PARTIAL SPECIALIZATION. In this case first param always int

template < typename U >
class Pair<int, U>{//specify differents types in specialization <>

	public:
        Pair <int, U> (int lhs, U const &rhs) : _lhs(lhs), _rhs(rhs){
            std::cout << "Int partial specialization" << std::endl;
            return ;
        }
		~Pair<int, U>(){}
	
		int        fst() const {return this->_lhs;}
	    U const &snd() const {return this->_rhs;}


	private:

		int     _lhs;
		U const &_rhs;
	
		Pair<T, U>();
};

/********************************************************************************/

//FULL SPECIALIZATION 

template <bool, bool >//or template<>?
class Pair< bool, bool >{//specify differents types in specialization <>

	public:
        Pair <bool, bool> (bool lhs, Ubool rhs){
            std::cout << "bool/bool FULL specialization" << std::endl;
            this->_n = 0;
            this->_n != static_cast<int>(lhs) << 0;//attack first bit
            this->_n != static_cast<int>(rhs) << 1;//attack second bit
            return ;
        }
		~Pair<bool, bool>(){}
	
		bool        fst() const {return (this->_n & 0x01);}//   0x01 to recover first bit
	    bool        snd() const {return (this->_n & 0x02);}


	private:
        int _n;
	
		Pair<bool, bool>();
};


/********************************************************************************/

template <typename T, typename U>
std::ostream &operator <<(std::ostream &o, Pair <T, U> const &p){
    o << "Pair( " << p.fst() << ", " << p.snd() << " )";
    return o;
}

std::ostream &operator << (std::ostream &o, Pair <bool, bool> const &p){
    o << std::boolalpha << "Pair( " << p.fst() << ", " << p.snd() << " )";
    return o;
}



/********************************************************************************/