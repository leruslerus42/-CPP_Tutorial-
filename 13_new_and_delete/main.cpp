/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 07:12:10 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "header.hpp"

//NEW AND DELETE manage memory allocation with malloc brackets
class Student
{
	private:
		std::string _login;
	public:
		Student(std::string) : _login(_login){
			std::cout << "Student" << this->_login << " is born" << std::endl;
			this->_login = _login;
		}		

		~Student(){
			std::cout << "Student" << this->_login << " died" << std::endl;
		}

};



int main(void)
{	
	Student bob = Student("efvq");		//on stack: like normal var
	Student* jim = new Student("vfqd");	//on heap: dinamically using malloc, constructor of student will initialize it correctly and return a pointer on the instance I am getting
	

	/*allocate array of 42 students; change constructor to default
	Student* students = new Student[42];
	delete [] students;
	*/
	
	delete jim; //jim destroyed
	return (0);//bob destroyed (from stack)
}