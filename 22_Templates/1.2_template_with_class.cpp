/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.2_template_with_class.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:41:22 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 09:50:17 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//TEMPLATE ON CLASS->STL:Standard Template Library, lot of templaates; this is a model to create a fucntion or a class with a var of a particular type 
//              and would be also able to instanciate it. And when we do it the compiler will generate automatically code x us. 

template <typename T>           //template <typename T, typename u>, and in main List<int, int> a(42);          i can also use 2 parameters
class List {
    public:
        List<T>(T const & content){
        //etc
        }
        
        List<T>(List<T> const & list){
        //etc
        }
        
        ~List<T>(){
        //etc
        }    
        
        //etc

    private:
    T           _content;
    List<T> *   _next;
};



/***************************************/

int main()
{
    List<int> a(42);
    List<float> b(3.14f);
    List< List<int> > c(a);

    return 0;
}